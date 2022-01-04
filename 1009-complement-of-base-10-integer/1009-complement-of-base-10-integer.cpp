class Solution {
public:
    int bitwiseComplement(int n) {
        int temp = n;
        int power = 2;
        
        while(temp>>1){
            power=power<<1;
            temp=temp>>1;
        }
        
        return power - n -1;
        
    }
};