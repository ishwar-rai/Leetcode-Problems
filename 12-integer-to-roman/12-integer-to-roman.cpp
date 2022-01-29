class Solution {
public:
    string value(int &r)
    {
        if(r/1000){
            r-=1000;
            return "M";
        }  
        if(r/900){
            r-=900;
            return "CM";
        }
        if(r/500){
            r-=500;
            return "D";
        }   
        if(r/400){
            r-=400;
            return "CD";
        }
        if(r/100){
            r-=100; 
            return "C";
        }   
        if(r/90){
            r-=90;
            return "XC";
        }
        if(r/50){
            r-=50;
            return "L";
        }    
        if(r/40){
            r-=40;
            return "XL";
        }
        if(r/10){
            r-=10;
            return "X";
        }            
        if(r/9){
            r-=9;
            return "IX";
        }
        if(r/5){
             r-=5;
            return "V";
        }           
        if(r/4){
            r-=4;
            return  "IV";
        }
        if(r/1){
            r-=1;
            return "I";
        }            

        return "";
    }
    string intToRoman(int num) {
        string ans = "";
        
        while(num){
            ans += value(num);
        }
        
        return ans;
        
    }
};