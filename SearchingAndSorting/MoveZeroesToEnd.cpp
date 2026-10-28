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
    vector<int> arr = { 2, 0, 0, -7, 0, 0, 6, -6 , 0, 4 };
    int n = arr.size();
    print(arr) ;
    for( int i = 0 ; i < n - 1 ; i++ )
    {
     bool swp = false ;
     for ( int j = 0 ; j < n -1 - i ; j++ )
      if ( arr[j] == 0 )
      {
       swap( arr[j] , arr[j+1]);
       swp = true ;
      }
     if ( !swp )  break ;
     }
    print( arr ) ;
}