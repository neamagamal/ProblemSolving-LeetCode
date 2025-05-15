public class Solution {
    public string ClearDigits(string s)
    {
        if(string.IsNullOrEmpty(s))
        {return "";}
        StringBuilder sp=new StringBuilder();
        foreach(var c in s ){
           if(Char.IsDigit(c)&&sp.Length>0){
            sp.Length--;
           }else 
           if(Char.IsLetter(c)){
            sp.Append(c);
           }
        } 
        return sp.ToString();
       
    }
}