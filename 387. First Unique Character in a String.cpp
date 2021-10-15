#include <iostream>

class Solution {
public:
    int firstUniqChar(string s) {
        for (int i = 0; i < s.size(); ++i) {
            bool check = true;
            for (int j = 0; j < s.size(); ++j) {
                if (i == j) continue;
                if (s[i] == s[j])
                {
                    check = false;
                    break;
                }
            }
            if (check) return i;
        }
        return -1;
    }
};


int main()
{

}