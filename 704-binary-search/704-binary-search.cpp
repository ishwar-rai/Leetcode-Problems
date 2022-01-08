class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        if(size==0) return -1;
        int l = 0 , h = size-1;
        int mid = (l+h)/2;
        
        while(l<=h){
            if(nums[mid]==target)
                return mid;
            else if(target < nums[mid]){
                h = mid-1;
                mid = (l+h)/2;
            } else{
                l = mid + 1;
                mid = (l+h)/2;
            }
        }
        return -1;
    }
};