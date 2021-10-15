#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0 && x <= 9)return true;
        if (x < 0)return false;
        vector<short> vec;
        int tmp = x;
        while (tmp)
        {
            vec.push_back(tmp % 10);
            tmp /= 10;
        }
        long int num = 0;
        for (int i = 0; i < vec.size(); ++i) {
            num += vec[i] * pow(10, vec.size() - 1 - i);
        }
        std::cout << num;
        if (num == x) return true;
        return false;
    }
};


int main()
{

}