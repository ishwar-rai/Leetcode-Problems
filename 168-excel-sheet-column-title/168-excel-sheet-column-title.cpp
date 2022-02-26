class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber){
            columnNumber--;
            int a=columnNumber%26;
            s+=('A'+a);
            columnNumber/=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};