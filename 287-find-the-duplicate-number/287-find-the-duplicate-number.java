class Solution {
    public int abs(int n){
        if(n<0) return n*-1;
        return n;
    }
    public int findDuplicate(int[] nums) {
        int len = nums.length;
        for(int i=0; i<len; i++){
            int val = abs(nums[i]);
            if(nums[val]<0) return val;
            nums[val]=nums[val]*-1;
            
        }
        return 0;
    }
}