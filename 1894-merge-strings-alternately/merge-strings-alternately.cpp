class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int s1=w1.size(),s2=w2.size();
        int i=0,j=0,x=0;
        string ans="";
        while(i<s1 && j<s2) {
            if(x%2 == 0) {
                ans += w1[i++];
            }
            else {
                ans += w2[j++];
            }
            x++;
        }
        while(i<s1) {
            ans += w1[i++]; 
        }
        while(j<s2) {
            ans += w2[j++];
        }

        return ans;
    }
};