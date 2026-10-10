#include <iostream>
using namespace std;
int main()
{
    int n ,sum = 0 ;
    cout << "Enter size of Array:" ;
    cin >> n ;
    int arr[n];
    cout << "Enter " << n << " Elements: " ;
    for( int i = 0 ; i < n ; i++ )
       cin >> arr[i] ;
    cout << "Your Array Elements are:\n" ;
    for( int i = 0 ; i < n ; i++ )
    {
       cout << arr[i] << " " ;
       sum += arr[i] ;
    }
    cout << "\nSum of all array elements are : " << sum  ;
}