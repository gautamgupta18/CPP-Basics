/*
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     vector<vector<int>> arr( n , vector<int> ( n , 0))  ;
       int minr = 0 , maxr = n-1 , minc = 0, maxc = n-1;
       int val = 1 ;
      while(minr <= maxr && minc <= maxc)
      {
         for ( int i = minc ; i <= maxc ; i++ )
         {
            arr[minr][i] = val++ ;
         }
         minr++ ;
         for ( int i = minr  ; i <= maxr ; i++ )
         {
            arr[i][maxc] = val++ ;
         }
         maxc-- ;
         if (minr <= maxr)
         for ( int i = maxc ; i >= minc ; i--)
         {
            arr[maxr][i] = val++ ;
         }
         maxr--;
         if (minc <= maxc)
         for (int i = maxr; i >= minr ; i-- )
         {
            arr[i][minc]  = val++ ;
         }
         minc++ ;
      }
      return arr ;
    }
}; 
*/