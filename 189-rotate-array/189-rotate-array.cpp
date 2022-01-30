class Solution {
public:
    void reverse(vector<int>& v, int l, int r){
        while(l<r){
            v.at(l) = v.at(l) ^ v.at(r);
            v.at(r) = v.at(l) ^ v.at(r);
            v.at(l) = v.at(l) ^ v.at(r);
            l++, r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % nums.size();
        reverse(nums, 0, size - k - 1);
        
        reverse(nums, size-k, size-1);
        
        reverse(nums, 0, size-1);
    }
};