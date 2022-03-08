class Solution {
    
    public int maxSubArray(int[] nums) {
        int n = nums.length;
        int SUM = nums[0];
        int OPT = nums[0];
        for (int i = 1; i < n; ++i) {
        SUM = Math.max(SUM + nums[i], nums[i]);
        OPT = Math.max(OPT, SUM);
        }
        return OPT;
    }
}