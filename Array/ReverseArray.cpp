#include <iostream>
#include <vector>
using namespace std ;
int main()
{
    vector<int> a = { 3 , 15 , 7 , 9 , 17 , 5 , 19 } ;
    for( int elem : a)
        cout << elem << " " ;

    int i = 0 , j = a.size() -1 ;
    while ( i < j )
    {
        a[i] = a[i] + a[j] - ( a[j] = a[i]) ;
        i++ ;
        j--;
    }
    cout << "\nReversed Array/Vector: " ;
    for( int elem : a)
        cout << elem << " " ;
}