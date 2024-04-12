class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s); // Create a stringstream object to tokenize the input string
        string word, ans=""; // Initialize variables to store each word and the reversed string

        // Tokenize the input string by extracting words one by one
        while (ss >> word) {
            ans = word + " " + ans; // Concatenate each word to the beginning of the result string
        }
        ans.pop_back(); // Remove the extra space at the end of the result string
        return ans; // Return the reversed string
    }
};
