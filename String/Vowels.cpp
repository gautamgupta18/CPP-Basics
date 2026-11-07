#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter a string:";
    string s ;
    getline ( cin , s);
    int vowels = 0 , cons = 0;
    for ( char ch : s) 
    {
        if (  ch >= 'A' && ch <= 'Z')  ch += 32 ;
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
         vowels ++ ;
        else if ( ch >= 'b' && ch <= 'z' )
         cons ++ ;
    }
    cout << "Vowels = " << vowels << endl << "Consonants = " << cons ;
}