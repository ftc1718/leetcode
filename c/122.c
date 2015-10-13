/* find peak value */


int maxProfit(int* prices, int pricesSize) {
    int i = 0, profit = 0;
    int lowest, highest;
    while(i < pricesSize - 1){
        while(*(prices + i) >= *(prices + 1 + i) && i < pricesSize - 1){
            i++;
        }
        lowest = *(prices + i);
        while(*(prices + i) <= *(prices + 1 + i) && i < pricesSize - 1){
            i++;
        }
        highest = *(prices + i);
        profit = profit + highest - lowest;
    }
    return profit;
}