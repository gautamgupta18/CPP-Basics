/*
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
      int m = arr.size() ;
      int n = arr[0].size() ;
      vector<int> a ;
      int minr = 0 , maxr = m-1 , minc = 0, maxc = n-1;
      while(minr <= maxr && minc <= maxc)
      {
         for ( int i = minc ; i <= maxc ; i++ )
         {
            a.push_back(arr[minr][i]);
         }
         minr++ ;
         for ( int i = minr  ; i <= maxr ; i++ )
         {
            a.push_back( arr[i][maxc]) ;
         }
         maxc-- ;
         if (minr <= maxr)
         for ( int i = maxc ; i >= minc ; i--)
         {
            a.push_back(arr[maxr][i]);
         }
         maxr--;
         if (minc <= maxc)
         for (int i = maxr; i >= minr ; i-- )
         {
            a.push_back( arr[i][minc]) ;
         }
         minc++ ;
      }
      return a ;
    }
};
*/