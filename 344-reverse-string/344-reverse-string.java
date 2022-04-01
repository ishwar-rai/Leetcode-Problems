class Solution {
    public void reverseString(char[] s) {
        int len = s.length;
        int mid;
        if(len%2==0){
            mid = len/2;
        } else mid = len/2+1;
        int l=0, h=len-1;
        
        while(l<h){
            if(l==h) break;
            char temp = s[l];
            s[l++] = s[h];
            s[h--] = temp;
        }
        
    }
}