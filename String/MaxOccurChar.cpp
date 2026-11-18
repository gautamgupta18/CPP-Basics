#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter a string:" ;
    string s  ;
    getline ( cin , s) ;
    int n = s.size() ;
    vector<int> freq(26, 0) ;
    for ( char elem : s )
    {
        if( elem >= 'A' && elem <= 'Z')
          elem = elem + 32 ;
        if ( elem != ' ') 
        freq [ int(elem) - 97 ] += 1 ; 
    }
    int max = 0 ;
    char mxoccur ;
    for ( int i = 0 ; i < 26 ; i++ ) 
       if( max < freq[i]) 
       {
        max = freq[i] ;
        mxoccur = char( 97 + i) ;
       }
    cout << "Character with maximum occurance = " << mxoccur <<endl ;
}