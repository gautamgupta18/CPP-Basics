#include <iostream>
#include <vector>
using namespace std;
void print( vector<int> & v )
{
    for ( int elem : v)
      cout << elem << " " ;
    cout << endl ;
}
int main()
{
    vector<int> arr = { 2, 4, 1, 7, 5, 8, 6, 9 , 3, 4 };
    int n = arr.size();
    print(arr) ;
    for( int i = 0 ; i < n - 1 ; i++ )
    {
        int mn = arr[i], mnindex = i ;
     for ( int j = i ; j < n  ; j++ )
      if ( arr[j] < mn)
      {
        mn = arr[j];
        mnindex = j ;
      }
      swap(arr[i] , arr[mnindex]) ;
     }
    print( arr ) ;
}