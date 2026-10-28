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
    for( int i = 1 ; i <= n - 1 ; i++ )
    {
      int j = i ;
      while( j >= 1 && arr[j-1] > arr[j])
      {
       swap( arr[j] , arr[j-1]);
       j--;
      }
     }
    print( arr ) ;
}