class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int day=0;
            int size=prices.size();
            int mini=INT_MAX;
            int maxi=INT_MIN;
            for(int i=0;i<size;i++)
            {
                  mini=min(mini,prices[i]);
                  maxi=max(maxi,prices[i]-mini);
                    
            }
            return maxi;
    }
};