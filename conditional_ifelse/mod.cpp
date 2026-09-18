#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer:";
    cin >> n;
    if ( n > 0)
        cout << "|" <<n <<"| = " << n ; // for print absolute value (|n|)
    else
        cout << "|" <<n <<"| = " << n*(-1) ; // for print absolute value (|n|)
}