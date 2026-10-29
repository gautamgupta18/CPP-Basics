/*
class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size() ;
        int i = 0 , j = n-1 ;
        int area  ;
        int mxarea = 0 ;
        int mn = 0 ;
        while( i <= j )
        {
            mn = min( arr[i] , arr[j]) ;
            area = mn * ( j-i );
            if ( area > mxarea)
              mxarea = area ;
            if ( mn == arr[i] )
             i++;
             else 
             j--;
        }
        return mxarea ;
    }
};
*/