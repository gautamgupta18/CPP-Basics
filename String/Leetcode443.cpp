/*
class Solution {
public:
    int compress(vector<char>& ch) {
           int n = ch.size();
   int i = 0 , j = 0 , Maxlen = 0 ;
   string ans ;
   while ( j < n )
   {
      if ( ch[j] == ch[i])
        j++ ;
      else {
        int len = j - i ;
        ans.push_back(ch[i]) ;
        if ( len > 1 )
        ans += to_string(len) ;
        i = j ;
      }
   }
           int len = j - i ;
        ans.push_back(ch[i]) ;
        if ( len > 1 )
        ans += to_string(len) ;
    vector<char> s( ans.size(), 0) ;
    for ( int k = 0 ; k < s.size() ; k++)
      s[k] = ans[k] ;
    ch = s ;
   return ans.size() ;
    }
};
*/