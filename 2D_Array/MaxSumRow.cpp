#include <iostream>
#include <climits>
using namespace std ;
int main()
{
    int arr[3][4] ;
    cout << "Enter 12 elements:" ;
    for ( int i = 0 ; i < 3 ; i++)
      for ( int j = 0 ; j < 4 ; j++ )
        cin >> arr[i][j]  ;
    for ( int i = 0 ; i < 3 ; i++)
    {
      for ( int j = 0 ; j < 4 ; j++ )
        cout << arr[i][j] << " " ;
    cout << endl ;
    } 
    int  maxsum = INT_MIN;
    int row ;
    for ( int i = 0 ; i < 3 ; i++)
    {
      int sum = 0 ;
      for ( int j = 0 ; j < 4 ; j++ )
       sum += arr[i][j] ;
      if( sum > maxsum ) 
      {
         maxsum = sum ;
         row = i+1;
      }
    }
    cout << "Row " << row << " has Maximum sum " << maxsum ;
}