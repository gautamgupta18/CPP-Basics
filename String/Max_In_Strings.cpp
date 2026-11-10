#include <iostream>
#include <string>
#include <vector>
using namespace std ;
string maxNumber(string s1 , string s2)
{
   int i = 0 ;
   while( i < s1.size() && s1[i] == '0')  i++ ;
   int s1_real_len = s1.size() - i ;
   int j = 0 ;
   while(j < s2.size() && s2[j] == '0')  j++ ;
   int s2_real_len = s2.size() - j ;
   if(s1_real_len > s2_real_len)  return s1 ;
   if(s2_real_len > s1_real_len)  return s2 ;
   while( i < s1.size() && j < s2.size() && s1[i] == s2[j])
   {
      i++ ;
      j++ ;
   }
   if(i == s1.size()) return s1 ;
   if (s1[i] > s2[j])  return s1 ;
   if (s1[i] < s2[j])  return s2 ;
}
int main()
{
    vector<string> s = { "123", "0765" , "00163" , "00987", "0766", "098"} ;
    string max = s[0] ;
    //By using stoi//stoll
    /*
    for( int i = 0 ; i < s.size() ; i++ )
    {
        if(stoll(max) < stoll(s[i]))
          max = s[i] ;
    }
    */

   //without using stoi/stoll
   for( int i = 1 ; i < s.size() ; i++ )
   {
     max = maxNumber( max , s[i]) ;
   }
   cout << max ;
}