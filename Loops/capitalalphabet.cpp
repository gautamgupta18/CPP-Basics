#include <iostream>
using namespace std ;
int main()
{
    cout << "Char  -->" << "   Ascii" << endl ;
    for ( int i = 65 ; i <= 90 ; i++ )
    {
        cout << (char)i << "     -->     " << i << endl ;
    }
}