/*
class Solution {
public:
    double power( double x , long long y ) {
    if ( y == 0 || x == 1 )  return 1 ;
    double p = power(x , y/2) ;
    if (y % 2 == 0 )  return p * p ;
    else  return p * p * x ;
}
    double myPow(double x, int n) {
       long long n2 = n ;
       if(n >= 0) return power(x,n2) ;
       else return 1 / power(x,n2*-1) ;
    }
}; 
*/