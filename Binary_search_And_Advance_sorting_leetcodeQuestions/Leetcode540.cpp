/*
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size() ;
        if ( n == 1 || arr[0] != arr[1]) return arr[0] ;
        else if( arr[n-1] != arr[n-2]) return arr[n-1] ;
       int low = 0 , high = n - 1 ; 
       int mid ; 
       while ( low <= high)
       {
         mid = low + ( high - low ) / 2 ;
         int f , s ;
         if( (arr[mid - 1 ] != arr[mid]) && ( arr[mid] != arr[mid + 1]) ) 
            return arr[mid] ;
         if (  arr[mid - 1 ] == arr[mid])
         {
                  f = mid - 1 ;
                  s = mid ;
        }
        else if ( arr[mid] == arr[mid + 1])
        {
                f = mid ;
                s = mid + 1 ;
         }
            if ( ( f-low)%2 == 0) low = s + 1 ;
            else high = f - 1 ;
         }
       return arr[mid] ;
    }
};
*/