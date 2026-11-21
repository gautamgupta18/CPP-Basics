#include <iostream>
using namespace std ;
int main()
{
    int n1, n2 ;
    cout << "Enter two number to find HCF: " ;
    cin >> n1 >>n2 ;
    for( int i = min(n1, n2) ; i > 0 ; i-- )
    {
        if ( n1 % i  == 0 && n2 % i == 0) {
            cout << "HCF = " << i ;
            break ;
        }
    }
}