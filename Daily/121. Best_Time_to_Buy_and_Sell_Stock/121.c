int maxProfit(int* prices, int pricesSize){
    int buy=48763,max_profit=0;
    for(int i=0;i<pricesSize;i++){
        if(buy>prices[i]){
            buy=prices[i];
        }
        int profit=prices[i]-buy;
        if(profit>max_profit) max_profit=profit;
    }
    return max_profit;
}
