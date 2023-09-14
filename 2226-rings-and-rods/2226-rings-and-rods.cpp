class Solution {
public:
    int countPoints(string s) {
        int size = s.size(), r[10], g[10], b[10];
        for(int i=0;i<10;i++){
            r[i] = 100, g[i] = 100, b[i] = 100;
        }
        for(int i=0;i<size;i+=2){
            if(s[i] == 'R'){
                int temp = int(s[i+1])-48;
                r[temp] = 1;
            }
            else if(s[i] == 'G'){
                int temp = int(s[i+1])-48;
                g[temp] = 1;
            }
            else if(s[i] == 'B'){
                int temp = int(s[i+1])-48;
                b[temp] = 1;
            }
        }
        int cnt = 0;
        for(int i=0;i<10;i++){
            if(r[i] == g[i] and g[i] == b[i] and r[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
};