// alphabet rectangle pattern
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
          cout << (char)(j+64) << " " ;
    }
}
// A B C D
// A B C D
// A B C D