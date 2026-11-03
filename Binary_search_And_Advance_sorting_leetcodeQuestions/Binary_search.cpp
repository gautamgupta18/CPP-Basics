/*
class Solution {
public:
    int search(vector<int>& arr, int target) {
       int low = 0, high = arr.size() - 1 , mid ; 
       while ( low <= high)
       {
        mid = ( low + high ) / 2 ;
        if ( arr[mid] > target )   high = mid - 1 ;
        else if ( arr[mid] < target )   low = mid + 1 ;
        else   return mid ; 
       }
       return -1 ;
    }
};
*/