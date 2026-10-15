#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = { 0, 1, 1, 0, 1, 0, 0, 1, 0 };
    int n = arr.size() ;
    int  i = 0 , j = n - 1 ;
    
    while ( i < j )
    {
       if ( arr[i] == 0 )
            i++ ;
       else if (arr[j] == 1 )
            j--;
       else if ( arr[i] == 1 && arr[j] == 0) 
           swap ( arr[i++], arr[j--] );
    }
    for( int elem : arr)
        cout << elem << " " ;
}