#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "abcde";
    for( int i = 0 ; i < s.size() ; i++ )
      for( int j = 1 ; j < s.size() - i + 1 ; j++)
        cout << s.substr(i , j) <<"  " ;
}