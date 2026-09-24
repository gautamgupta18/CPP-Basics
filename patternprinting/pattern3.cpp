// number rectangle pattern 2
#include<iostream>
using namespace std;
int main()
{
    int r , c ;
    cout << "Enter numbers of rows and column :";
    cin >> r >> c ;
    for ( int i = 1 ; i <= r ; i++)
    {
        cout << endl ; 
        for ( int j = 1 ; j <= c ; j++ )
          cout << i << " " ;
    }
}
// 1 1 1 1
// 2 2 2 2
// 2 2 2 2