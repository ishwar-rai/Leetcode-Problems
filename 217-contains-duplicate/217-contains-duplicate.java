class Solution {
    public boolean containsDuplicate(int[] nums) {
        int i=0;
        HashSet<Integer> map = new HashSet<>();
        int len = nums.length;
        while(i<len){
            if(map.contains(nums[i])) return true;
            else map.add(nums[i++]);
        }
        return false;
    }
}