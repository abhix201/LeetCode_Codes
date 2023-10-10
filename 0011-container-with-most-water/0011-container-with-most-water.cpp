class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans = 0, i = 0, j = h.size() - 1;
        while(i < j){
            int hf = min(h[i], h[j]);
            ans = max(ans, (j-i) * hf);
            while(h[i] <= hf && i < j) i++;
            while(h[j] <= hf && i < j) j--; 
        }
        return ans;
        
    }
};