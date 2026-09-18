#include<iostream>
using namespace std;
int main()
{
    float n;
    cout << "Enter a real number:";
    cin >> n;
    int i = (int) n;
    if ( i == n)
        cout << n << " is a integer" ;
    else
        cout << n << " is not a integer" ;
}