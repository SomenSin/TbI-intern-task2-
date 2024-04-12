class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        // Initialize prefix and suffix arrays
        vector<int> prefix(n,0),suffix(n,0);
        
        // Calculate prefix products
        prefix[0] = nums[0];
        for(int i=1;i<n;i++) {
            prefix[i] = prefix[i-1] * nums[i]; 
        }
        
        // Calculate suffix products
        suffix[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--) {
            suffix[i] = suffix[i+1] * nums[i]; 
        }
        
        // Calculate product except self for each element
        nums[0] = suffix[1]; // For the first element
        nums[n-1] = prefix[n-2]; // For the last element
        for(int i=1;i<n-1;i++) {
            nums[i] = suffix[i+1] * prefix[i-1];
        }
        
        return nums;
    }
};
