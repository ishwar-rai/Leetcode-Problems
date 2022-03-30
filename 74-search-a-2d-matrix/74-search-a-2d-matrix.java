class Solution {
    public boolean solve(int[] a, int x){
        int l,h,mid;
        l=0; h=a.length-1; 
        mid = (l+h)/2;
        while(l<=h){
            if(a[mid]==x) return true;
            else if(x<a[mid]){
                h=mid-1;
                mid=(l+h)/2;
            } else {
                l=mid+1;
                mid=(l+h)/2;
            }
        }
        return false;
    }
    public boolean searchMatrix(int[][] matrix, int target) {
        for(int[] a: matrix){
            if(solve(a, target)) return true;
        }
        
        return false;
    }
}