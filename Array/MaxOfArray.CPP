#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of Array:" ;
    cin >> n ;
    int arr[n];
    cout << "Enter " << n << " Elements: " ;
    for( int i = 0 ; i < n ; i++ )
       cin >> arr[i] ;
       int max = INT_MIN , min = INT_MAX;
    cout << "Your Array Elements are: " ;
    for( int i = 0 ; i < n ; i++ )
    {
       cout << arr[i] << "  " ;
       if ( arr[i] > max )
        max = arr[i] ;
       if ( arr[i] < min) 
        min = arr[i];
    }
    cout << "\nMax : " << max  << "\tMin : " << min;
}