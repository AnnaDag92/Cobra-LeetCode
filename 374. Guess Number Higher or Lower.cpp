#include <iostream>

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        long int end = n;
        while (start <= end) {
            long int pick = (end + start) / 2;
            if (guess(pick) == 0)return pick;
            else if (guess(pick) > 0) start = pick + 1;
            else end = pick - 1;
        }
        return -1;
    }
};


int main()
{

}