#include<iostream>
using namespace std;
int main()
{
    int cp, sp;
    cout << "Enter the cost price:";
    cin >> cp;
    cout << "Enter the selling price:";
    cin >> sp;
    if ( sp > cp)
        cout << "profit = " << sp - cp ;
    else if ( cp > sp)
        cout << "Loss = " << cp - sp ;
    else
        cout << "You sell in cost price";
}