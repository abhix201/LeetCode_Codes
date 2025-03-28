class Solution {
public:
    int dirs[5] = { -1, 0, 1, 0, -1};
vector<int> maxPoints(vector<vector<int>>& g, vector<int>& qs) {
    int si = g.size(), sj = g[0].size(), cur = 1;
    priority_queue<array<int, 3>> pq;
    map<int, int> psum;
    pq.push({-g[0][0], 0, 0});
    g[0][0] = 0;
    while(!pq.empty()) {
        auto [nval, i, j] = pq.top(); pq.pop();
        cur = max(cur, -nval);
        ++psum[cur];
        for (int d = 0; d < 4; ++d) {
            int x = i + dirs[d], y = j + dirs[d + 1];
            if (min(x, y) >= 0 && x < si && y < sj && g[x][y]) {
                pq.push({-g[x][y], x, y});
                g[x][y] = 0;
            }
        }
    }
    for (auto it = next(begin(psum)); it != end(psum); ++it) {
        it->second += prev(it)->second;
    }
    transform(begin(qs), end(qs), begin(qs), [&](int val){ 
        auto it = psum.lower_bound(val);
        return it == begin(psum) ? 0 : prev(it)->second; 
    });
    return qs;
}
};