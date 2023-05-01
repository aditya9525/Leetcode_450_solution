class Solution {
public:
    int balancedStringSplit(string s) {
        int balancedString=0;
        int count = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='R'){
                balancedString++;
            }
            else{
                balancedString--;
            }

            if(balancedString == 0){
                count++;
            }
        }
        return count;        
    }
};
