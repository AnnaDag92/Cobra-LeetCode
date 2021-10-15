#include <iostream>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> vec1(26, 0);
        for (int i = 0; i < s.size(); ++i)
        {
            ++(vec1[s[i] - 'a']);
        }
        vector<int> vec2(26, 0);
        for (int i = 0; i < t.size(); ++i)
        {
            ++(vec2[t[i] - 'a']);
        }
        for (int i = 0; i < 26; ++i) {
            if (vec1[i] != vec2[i])return false;
        }
        return true;
    }
};

int main()
{

}