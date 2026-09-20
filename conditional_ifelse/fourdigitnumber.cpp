#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n ;
    if ( ( n >= 1000 && n <= 9999 ) || ( n >= -9999 && n <= -1000) )
    cout << n << " is a 4 digit number" ;
    else
    cout << n << " is not a 4 digit number" ;
}