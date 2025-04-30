public class Solution {
    public bool IsPalindrome(int x) 
    {
    int left=0;
   int right=x;
    while(right>0){
    left= left*10+ right%10;
    right/=10;

    }
    return left==x;
    



    }
}