class Solution {
public:
    bool detectCapitalUse(string word) {
            if(allCap(word))
                return true;
            if(allSmall(word))
                return true;
            if(norWord(word))
                return true;
        
        return false;
    }
    bool allCap(string str){
        int len = str.length();
        if(len == 1 && str.at(0)>='A' && str.at(0)<='Z')
            return true;
        if(str.at(len-1)>='A' && str.at(len-1)<='Z'){
            str.pop_back();
            return true && allCap(str);
        } else return false;
        return false;
    }
    
    bool allSmall(string str){
        int len = str.length();
        if(len==1 && str.at(0)>='a' && str.at(0)<='z')
            return true;
        if(str.at(len-1)>='a' && str.at(len-1)<='z'){
            str.pop_back();
            return true && allSmall(str);
        } else return false;
    }
    
    bool norWord(string str){
        int len = str.length();
        if(len == 1 && (str[0]>='A' && str[0]<='Z'))
            return true;
        if(str[len-1]>='a' && str[len-1]<='z'){
            str.pop_back();
            return true && norWord(str);
        } return false;
    }
};