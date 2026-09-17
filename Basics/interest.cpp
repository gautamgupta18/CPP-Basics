#include<iostream>
using namespace std;
int main()
{
    float p, r, t ;
    cout << "Enter principle:" ;
    cin >> p ;
    cout << "Enter Rate of Interest:" ;
    cin >> r ;
    cout << "Enter time in year:" ;
    cin >> t ;
    float si = (p * r * t)/ 100 ;
    cout << "Simple interest = " << si ;
    float amount = p + si ;
    cout <<"\nTotal amount = " << amount ;
}