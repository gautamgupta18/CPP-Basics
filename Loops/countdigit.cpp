#include <iostream>
using namespace std ;
int main()
{
    int n , count = 0 ;
    cout << "Enter a number :";
    cin >> n ;
    int copy = n ;
    if ( copy < 0 )
       copy = copy * -1 ;
    while ( copy > 0)
    {
       count ++ ;
       copy /= 10 ;
    }
    if ( n == 0 )
       count ++ ;
    cout << "Number of digits in " << n << " is " << count ;
}