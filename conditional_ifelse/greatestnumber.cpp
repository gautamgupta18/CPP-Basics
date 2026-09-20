#include<iostream>
using namespace std;
int main()
{
    int a , b , c ;
    cout << "Enter the three numbers:";
    cin >> a >> b >> c ;
    if ( a > b && a > c )
    cout << "Max number = " << a;
    else if ( b > c)
    cout << "Max number = " << b;
    else 
    cout << "Max number = " << c;
}