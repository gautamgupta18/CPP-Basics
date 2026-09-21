#include <iostream>
using namespace std ;
int main()
{
    int n ;
    cout << "Enter number to print table:" ;
    cin >> n ;
    for ( int i = 1 ; i <= 10 ; i++ )
       cout << n << " * " << i << " = " << n * i << endl ;
}