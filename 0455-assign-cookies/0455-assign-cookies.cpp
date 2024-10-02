class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end()); //greed factor of each child for the minimum size of the cookie
        sort(s.begin(),s.end()); //size of the cookie
        //using 2 pointers

        int gs = g.size();
        int ss = s.size();
        int l = 0, r = 0;
        while(l < gs && r < ss){
        	if(g[l] <= s[r]){
        		l++;
        	}
        	r++;
        }
        return l;
    }
};