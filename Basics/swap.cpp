#include <iostream>
using namespace std;
int main()
{
    int a , b;
    cout << "Enter two numbers:" ;
    cin >> a >> b ;
    cout << a << " " << b << endl ;
    //Basic method 1
    // int temp = a ;
    // a = b ;
    // b = temp ;

    // Method 2
    // a = a + b ;
    // b = a - b ;
    // a = a - b ;

    //one liner method 3 ;
    a = a + b - ( b = a ) ;
    
    cout << a << " " << b << endl ;
}