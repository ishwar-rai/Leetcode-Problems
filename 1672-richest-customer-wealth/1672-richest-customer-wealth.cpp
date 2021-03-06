class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int max = INT_MIN, sum=0;
        for(int i=0; i<m; i++){
            sum=0;
            for(int j=0; j<n; j++){
                sum = sum + accounts[i][j];
            }
            if(max<sum) max = sum;
        }
        return max;
    }
};