class Solution {
public:
    vector<vector<int>> vec;
    void solve(vector<int> nums, vector<int> v){
        if(nums.size()==0){
            vec.push_back(v);
            return;
        }
        vector<int> t1, t2;
        t1=v;
        t2=v;
        t1.push_back(nums[0]);
        // v.push_back(nums[0]);
        nums.erase(nums.begin());
        solve(nums, t1);
        
        solve(nums, t2);
        // vec.push_back(v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        solve(nums, v);
        return vec;
    }
};