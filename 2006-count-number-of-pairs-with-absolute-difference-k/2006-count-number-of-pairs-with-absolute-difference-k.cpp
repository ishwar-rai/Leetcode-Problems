class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int diff = nums[i]-nums[j];
                if(abs(diff)==k) count++;
                }
        }
        return count;
    }
};