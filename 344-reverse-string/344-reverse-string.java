class Solution {
    public void reverseString(char[] s) {
        int l=0, h=s.length-1;
        
        while(l<h){
            if(l==h) break;
            char temp = s[l];
            s[l++] = s[h];
            s[h--] = temp;
        }
        
    }
}