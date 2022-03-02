class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0;
        int temp=0;
        for(int i=0; i<s.size(); i++){
            for(int j=temp; j<t.size(); j++){
                if(s[i]==t[j]){ 
                    count++;
                    temp=j+1;
                    break;
                }
            }
        }
        if(count==s.length()) return true;
        return false;
    }
};