class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        for(int k=m; k<m+n; k++){
            nums1.at(k) = nums2[i];
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }
};