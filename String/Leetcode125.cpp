/*
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size() ;
        int i = 0 , j = n-1 ;
        while ( i <= j )
        {
            char ch1 = s[i] , ch2 = s[j] ; 
            if( ch1 >= 'A' && ch1 <= 'Z')  ch1 += 32 ;
            if( ch2 >= 'A' && ch2 <= 'Z')  ch2 += 32 ;
            if ( !(ch1 >= 'a' && ch1 <= 'z') && !(ch1 >= '0' && ch1 <= '9') )
            {
                i++ ;
                continue ;
            }
            if ( !(ch2 >= 'a' && ch2 <= 'z') && !(ch2 >= '0' && ch2 <= '9') )
            {
                j-- ;
                continue ;
            }
            if ( ch1 == ch2)  
              {
                i++ ;
                j--;
              }
            else  return false ;
        }
        return true ;
    }
};
*/