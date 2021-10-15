#include <iostream>

class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1;
        long int end = num;
        while (start <= end) {
            long int mid = (start + end) / 2;
            if ((mid * mid) == num) return true;
            else if ((mid * mid) > num) end = mid - 1;
            else start = mid + 1;
        }
        return false;
    }
};


int main()
{

}