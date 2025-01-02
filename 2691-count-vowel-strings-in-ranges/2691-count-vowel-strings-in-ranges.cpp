class Solution {
public:
inline bool vowel (char ch){
    return ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
       vector<int>pre(n);
       for(int i=0;i<n;i++){
       pre[i]=vowel( words[i][0]) && vowel(words[i].back());
       if(i)pre[i]+=pre[i-1];
       }
       int qu =queries.size();
       vector<int>res(qu);
       for(int i=0; i<qu;i++){
        int l= queries[i][0],r =queries[i][1];
   
      res[i] = pre[r] - (l > 0 ? pre[l - 1] : 0);
       }
       return res;
    }
};