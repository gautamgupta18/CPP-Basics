/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size() , n = arr[0].size() ;
        vector <int> a ;
        for( int i = 0 ; i < m ; i++ )
        for( int j = 0 ; j < n ; j++ )
           if ( arr[i][j] == 0 )
           {
             a.push_back(i) ;
             a.push_back(j) ;
           }
           int i = 0 ;
        while(i < a.size())
           {
            for( int j = 0 ; j < n ; j++ )
               arr[a[i]][j] = 0 ;
            i++ ;
            if( i < a.size())
            for( int j = 0 ; j < m ; j++ )
               arr[j][a[i]] = 0 ;
            i++ ;
           }
    }
};
*/