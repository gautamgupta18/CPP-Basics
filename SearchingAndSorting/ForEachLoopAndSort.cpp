#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
    vector<int> v = { 5, 2 , 10 , 44, 43} ;
    for( int elem : v )
      cout << elem << " " ;
    
    sort ( v.begin(), v.end() ) ; // Built in function for sort in vector

    cout << "\nAfter sort:" ;
    for( int elem : v )
      cout << elem << " " ;
}