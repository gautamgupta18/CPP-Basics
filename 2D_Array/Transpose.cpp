#include <iostream>
using namespace std ;
int main()
{
    int arr[][4] = { {2, 5, 7, 4}, { 3, 8, 3, 5} , { 5, 6, 4, 9}} ;

    for ( int i = 0 ; i < 4 ; i++)
    {
      for ( int j = 0 ; j < 3 ; j++ )
        cout << arr[j][i] << " " ;
    cout << endl ;
    }
}