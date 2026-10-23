/*
class Solution {
public:
    vector<vector<int>> generate(int rows) {
        vector<vector<int>> ans ;
        for ( int i = 0 ; i < rows ; i++)
         {
            ans.push_back(vector<int>( i+1 , 1 )) ;
            for ( int j = 0 ; j < ans[i].size() ; j++)
            {
                if ( i != j && j != 0 )
                {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j] ;
                }
            }
         }
         return ans ;
    }
};
*/