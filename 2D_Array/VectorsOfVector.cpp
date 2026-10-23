#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1 = { 2, 5, 8, 5, 2 };
    vector<int> v2 = { 2, 7, 6};
    vector<int> v3 = { 5, 5, 5, 2 };
    vector<int> v4 = { 8, 5 };
    vector<vector<int>> arr = {v1 , v2, v3, v4} ;
    for ( int i = 0 ; i < arr.size() ; i++ )
    {
        for ( int j = 0 ; j < arr[i].size() ; j++)
            cout << arr[i][j] << " " ;
        cout << endl ;
    }
}