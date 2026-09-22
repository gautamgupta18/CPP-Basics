#include <iostream>
using namespace std ;
int main()
{
    int n , sum = 0 ;
    cout << "Enter a number :";
    cin >> n ;
    int copy = n ;
    if ( copy < 0 )
       copy = copy * -1 ;
    while ( copy > 0)
    {
       sum += copy % 10 ;
       copy /= 10 ;
    }
    cout << "Sum of digits in " << n << " is " << sum ;
}