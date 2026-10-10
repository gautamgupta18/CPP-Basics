#include <iostream>
using namespace std;
int main()
{
    int arr[50], n ;
    cout << "Enter size of Array:" ;
    cin >> n ;
    cout << "Enter " << n << " Elements: " ;
    for( int i = 0 ; i < n ; i++ )
       cin >> arr[i] ;
    cout << "Your Array Elements are:\n" ;
    for( int i = 0 ; i < n ; i++ )
       cout << arr[i] << "  " ;
}