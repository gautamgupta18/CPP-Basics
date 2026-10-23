/*
class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
      int n = arr.size() ;
      if ( arr[n-1] != 9)  
      {
        arr[n-1] += 1 ;
       return arr ;
      }
      for ( int i = n - 1 ; i >= 0 ; i--)   {
        if ( arr[i] == 9 && i == 0)
         {
            arr[i] = 1 ;
            arr.push_back(0) ;
         }
        else if ( arr[i] == 9)
            arr[i] = 0 ;
        else {
         arr[i] += 1 ;
         return arr ;
      }
      }
      return arr ;
    }
};
*/

//Worst Time Complexity = O(n)