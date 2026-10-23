/*
class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size() ;
        for ( int i = 0 ; i<n ; i++)
        for ( int j = 0 ; j<=i ; j++)
            swap( arr[i][j] , arr[j][i]) ;
        for ( int i = 0 ; i<n ; i++)
        {
        if  (n/2 == i)
            break ;
        for ( int j = 0 ; j<n ; j++)
        {
            swap ( arr[j][i] , arr[j][n-1-i]) ;
        }
        }
    }
};
*/