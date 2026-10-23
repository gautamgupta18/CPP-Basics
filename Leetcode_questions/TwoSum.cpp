/*
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        for ( int j = 0 ; j < n ; j++ )
        for ( int i = j+1 ; i < n ; i++ )
        {
            if( arr[i]+arr[j] == target)
            return { j, i} ;
        }
        return {} ;
    }
};
*/