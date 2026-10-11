#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of Array:" ;
    cin >> n ;
    vector<int> arr(n);
    cout << "Enter " << n << " Elements: " ;
    for( int i = 0 ; i < n ; i++ )
       cin >> arr[i] ;
    int max = INT_MIN , min = INT_MAX;
    for( int i = 0 ; i < n ; i++ )
    {
       if ( arr[i] > max )
        max = arr[i] ;
       if ( arr[i] < min) 
        min = arr[i];
    }
    int smax = INT_MIN , smin = INT_MAX;
     for( int i = 0 ; i < n ; i++ ) 
    {
       if ( arr[i] > smax && arr[i] != max)
        smax = arr[i] ;
      if ( arr[i] < smin && arr[i] != min) 
        smin = arr[i];
    }
    cout << "\nMax : " << max  << "\tMin : " << min ;
    cout << "\nSecond Max : " << smax  << "\tSecond Min : " << smin ;
}