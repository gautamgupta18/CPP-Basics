#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of Array :" ;
    cin >> n ;
    int arr[n];
    cout << "Enter " << n << " Elements: " ;
    for( int i = 0 ; i < n ; i++ )
       cin >> arr[i] ;
    cout << "Search any Element in Array:" ;
    int key ;
    cin >> key ;
    bool flag = false ;
    for( int i = 0 ; i < n ; i++ )
       if ( key == arr[i] )
       {
         flag = true ;
         break ;
       }
    if ( flag == true )
      cout << "Element Found in Array ..." ;
    else
      cout << "Element Not Found in Array ..." ;
    }