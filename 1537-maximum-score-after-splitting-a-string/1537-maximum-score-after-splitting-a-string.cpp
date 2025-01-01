class Solution {
public:
    int maxScore(string s) {
        int countZeros=0, countOnes= count(s.begin(),s.end(),'1'),ans=0;
                s.pop_back();
        for(char ch :s){
countOnes-=ch=='1';
countZeros+=ch=='0';
ans=max(ans,countZeros+countOnes);

        }
        return ans;
    }
};