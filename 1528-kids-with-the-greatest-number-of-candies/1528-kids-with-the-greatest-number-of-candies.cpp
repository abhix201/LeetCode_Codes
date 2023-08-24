class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ansBool;
        int size = candies.size();
        int maxi = 0;
        for(int i=0;i<size;i++){
            maxi = max(maxi,candies[i]);
        }
        for(int i=0;i<size;i++){
            if(maxi <= (candies[i]+extraCandies)){
                ansBool.push_back(true);
            }
            else{
                ansBool.push_back(false);
            }
        }
        return ansBool;
    }
};