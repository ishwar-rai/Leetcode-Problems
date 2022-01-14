class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int size = sentences.size();
        int max = INT_MIN;
        int space=0;
        for(auto it:sentences){
            space=0;
            for(int i=0; i<it.length(); i++){
                if(it.at(i)==' ')
                    space++;
            }
            space++;
            if(space>max)
                max = space;
        }
        return max;
    }
};