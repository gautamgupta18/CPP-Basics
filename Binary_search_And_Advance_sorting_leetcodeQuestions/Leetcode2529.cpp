/*
class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int low = 0, high = arr.size() - 1 ; 
        int neg = 0;
       while ( low <= high)
       {
        int mid = ( low + high ) / 2 ;
        if ( arr[mid] >= 0 )   high = mid - 1 ;
        else  { 
          neg = mid + 1;
          low = mid + 1 ;   
    }
     }
     low = 0 ;
     high = arr.size() - 1 ; 
        int pos = 0 ;
       while ( low <= high)
       {
        int mid = ( low + high ) / 2 ;
        if ( arr[mid] <= 0 )   low = mid + 1 ;
        else  { 
          pos = arr.size() - mid ;
          high = mid - 1 ;   
    }
     }
     if ( pos >= neg)  return pos ;
     else  return neg ;
    }
};
*/