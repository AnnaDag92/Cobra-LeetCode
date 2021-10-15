#include <iostream>

class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'A' || ch == 'O' || ch == 'I' || ch == 'E' || ch == 'U' || ch == 'a' || ch == 'o' || ch == 'i' || ch == 'e' || ch == 'u');
    }
    string reverseVowels(string s) {
        for (int i = 0, j = s.size() - 1; i <= j; ) {
            if (isVowel(s[i]) && isVowel(s[j])) {
                swap(s[i++], s[j--]);
            }
            else if (isVowel(s[i]) && !isVowel(s[j])) --j;
            else ++i;
        }
        return s;
    }
};



int main()
{

}