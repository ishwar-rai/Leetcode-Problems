class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=-1, index;
        for(int i=0; i<nums.size(); i++){
            if(max<nums[i]){ max=nums[i], index=i;}
        }
        for(int i=0; i<nums.size(); i++){
            if(max<2*nums[i] && i!=index) return -1;
        }
        return index;
    }
};