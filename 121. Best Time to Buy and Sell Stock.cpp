#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices)
    {
        int min = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); ++i)
        {
            if (min > prices[i])   min = prices[i];
            if ((prices[i] - min) > profit)  profit = (prices[i] - min);
        }
        return profit;
    }
};;

int main()
{

}