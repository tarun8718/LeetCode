class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int size= prices.size();
        int fi=0,se=0;
        long long profit=0;
        bool free=true;
        for(int i=0;i<size-1;i++)
        {
            if(free && prices[i]<prices[i+1])
            {
                fi=prices[i];
                free=false;
            }
            if(!free && prices[i]>prices[i+1])
            {
                se=prices[i];
                free=true;
                profit+=se-fi;
            }
        }
        if (free==false)
        {
            profit+=prices[prices.size()-1]-fi;
        }
        return profit;
    }
};