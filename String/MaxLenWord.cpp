#include <iostream>
#include <string>
using namespace std;
int main()
{
   string  s ;
   cout << "Enter a String :" ;
   getline ( cin , s) ;
   int n = s.size();
   int i = 0 , j = 0 , Maxlen = 0 ;
   string MaxWord = "" ;
   while ( j < n )
   {
      if ( s[j] != ' ')
        j++ ;
      else {
        int len = j - i ;
        if(len > Maxlen )
        {
            Maxlen = len ;
            MaxWord = s.substr(i , len ) ;
        }
        i = j ;
        while ( j < n && s[j] == ' ')  
        {
            i++ ;
            j++ ;
        }
      }
   }
   int len = j - i ;
   if(len > Maxlen )
    {
        Maxlen = len ;
        MaxWord = s.substr(i , len ) ;
    }
   cout << "Word with Max length is " << MaxWord << endl ; 
}