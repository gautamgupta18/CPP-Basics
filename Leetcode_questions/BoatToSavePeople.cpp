/*
class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort ( arr.begin() , arr.end()) ;
        int n = arr.size();
        int i = 0 , j = n - 1 ;
        int boat = 0 ;
        while ( i <= j)
        {
            if (( arr[i] + arr[j]) > limit) 
            {
                boat ++ ;
                j-- ;
            } 
            else
            {
                boat ++ ;
                i++ ;
                j--;
            }
        }
        return boat ;
    }
};
*/