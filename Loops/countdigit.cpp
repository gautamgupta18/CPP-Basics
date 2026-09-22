#include <iostream>
using namespace std ;
int main()
{
    int n , count = 0 ;
    cout << "Enter a number :";
    cin >> n ;
    int copy = n ;
    while ( copy > 0)
    {
       count ++ ;
       copy /= 10 ;
    }
    cout << "Number of digits in " << n << " is " << count ;
}