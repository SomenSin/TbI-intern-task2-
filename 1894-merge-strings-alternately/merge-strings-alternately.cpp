class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int s1 = w1.size(), s2 = w2.size(); // Get sizes of both strings
        int i = 0, j = 0, x = 0; // Initialize iterators and counter
        string ans = ""; // Initialize result string
        
        // Iterate through both strings alternately
        while (i < s1 && j < s2) {
            if (x % 2 == 0) { // If counter is even
                ans += w1[i++]; // Append character from w1 to result and increment w1 index
            } else {
                ans += w2[j++]; // Append character from w2 to result and increment w2 index
            }
            x++; // Increment counter
        }
        
        // Append remaining characters from w1 if any
        while (i < s1) {
            ans += w1[i++];
        }
        
        // Append remaining characters from w2 if any
        while (j < s2) {
            ans += w2[j++];
        }

        return ans; // Return the merged string
    }
};
