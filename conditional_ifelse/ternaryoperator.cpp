#include<iostream>
using namespace std;
int main()
{
    int a , b , c ;
    cout << "Enter the three numbers:";
    cin >> a >> b >> c ;
    cout << "Max number = ";
    (a > b && a > c) ? cout << a : ( b > c) ? cout << b : cout << c  ;
}