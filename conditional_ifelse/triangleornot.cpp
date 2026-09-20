#include<iostream>
using namespace std;
int main()
{
    int a , b , c ;
    cout << "Enter the three sides of a triangle:";
    cin >> a >> b >> c ;
    if ( a+b > c && b+c > a && c+a > b )
    cout << " Triangle is  possible with sides " << a << " , "  << b << " and " << c ;
    else
    cout << " Triangle is  possible with sides " << a << " , "  << b << " and " << c ;
}