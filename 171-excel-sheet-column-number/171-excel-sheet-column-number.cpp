class Solution {
public:
    int titleToNumber(string columnTitle) {
        int number = 0;
        for(char c : columnTitle){
            int n = c - 'A' + 1;
            number = number*26 + n;
        }
        return number;
    }
};