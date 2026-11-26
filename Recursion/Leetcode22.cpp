/*
class Solution {
public:
    void par(int open ,int close ,int n ,string a ,vector<string> &ans) 
    {
        if( open == n && close == n)  
          {
            ans.push_back(a) ;
            return ;
          }
        if ( open < n)
            par( open + 1 , close , n , a + '(', ans) ;
        if ( close < open && close < n) 
            par(open , close + 1 , n , a + ')', ans) ;     
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans ;
        string a ;
        par ( 0 , 0 , n ,a, ans);
        return ans;
    }
};
*/