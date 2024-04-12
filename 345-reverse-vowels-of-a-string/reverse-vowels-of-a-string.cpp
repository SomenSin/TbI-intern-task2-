class Solution {
public:
    string reverseVowels(string s) {
        // Initialize two pointers at the start and end of the string
        int i=0, j=s.size()-1;
        
        // Loop until the pointers meet
        while(i<j) {
            // Move pointer i to the next vowel from the start of the string
            while( i<j && !isVowel(s[i]) ) {
                i++;
            }
            // Move pointer j to the next vowel from the end of the string
            while( i<j && !isVowel(s[j]) ) {
                j--;
            }
            // Swap vowels found at positions i and j
            swap(s[i++],s[j--]);
        }

        // Return the modified string
        return s;
    }
    
    // Function to check if a character is a vowel
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
                || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ;
    }
};
