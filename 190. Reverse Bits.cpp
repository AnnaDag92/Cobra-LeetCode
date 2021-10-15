#include <iostream>
#include <stack>
#include <algorithm>


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int i = 0;
        int res = 0;
        while (i < 32) {
            res |= (n & 1) << (31 - i);
            n = n >> 1;
            ++i;
        }
        return res;
    }
};

int main()
{

}