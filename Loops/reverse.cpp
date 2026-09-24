#include <iostream>
using namespace std ;
int main()
{
    int n , reverse = 0 ;
    cout << "Enter a number :";
    cin >> n ;
    int copy = n ;
    while ( copy > 0)
    {
       reverse = ( reverse * 10 ) + ( copy % 10 ) ;
       copy /= 10 ;
    }
    cout << "Reverse of digits in " << n << " is " << reverse ;
}