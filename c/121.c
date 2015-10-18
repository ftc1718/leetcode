// the same as max subarray problem
int maxProfit(int* prices, int pricesSize) {
    int cur_profit, max_profit;
    int i;
    cur_profit = max_profit = 0;
    for(i = 0; i < pricesSize - 1; i++)
    {
        cur_profit += prices[i + 1] - prices[i];
        if(cur_profit < 0)
            cur_profit = 0;
        else if(cur_profit > max_profit)
            max_profit = cur_profit;
    }
    return max_profit;
}