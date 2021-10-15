#include <iostream>

class Solution {
public:
    int lengthOfLastWord(string s) {
        s += ' ';
        int count = 0;
        int len = 0;
        int i = 0;
        while (s[i] == ' ')++i;
        for (; i < s.size(); ++i) {
            if (s[i] != ' ') ++count;
            else {
                if (s[i - 1] != ' ') { len = count; count = 0; }
                else continue;
            }
        }
        return len;
    }
};


int main()
{

}