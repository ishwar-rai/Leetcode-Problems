class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int size = nums.size();
        int i=0;
        while(i<size){
            if(original==nums.at(i)){ 
                original*=2; i=0;
            }
            if(original==nums.at(0)){ 
                original*=2; i=0;
            }
            i++;
            
        }
        return original;
    }
};