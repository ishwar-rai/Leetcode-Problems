class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int valAtInx = abs(nums[i]);
            if(nums[valAtInx] < 0) return valAtInx;
            else nums[valAtInx]*=-1;
        }
        return 0;
    }
};