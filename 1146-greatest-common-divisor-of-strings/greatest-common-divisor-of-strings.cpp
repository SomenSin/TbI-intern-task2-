class Solution {
public:
    // Function to find the greatest common divisor of two numbers
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    // Function to find the greatest common divisor of two strings
    string gcdOfStrings(string str1, string str2) {
        // Check if concatenation of both strings is equal in both orders
        // If true, return substring of str1 up to gcd of lengths of both strings
        // If false, return an empty string
        return (str1 + str2 == str2 + str1) ? str1.substr(0, gcd(str1.size(), str2.size())) : "";
    }
};
