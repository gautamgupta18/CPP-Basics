#include <iostream>
using namespace std ;
class Max
{
    int a, b, c ;
    public:
    void putdata();
    void getdata();
};

void Max::putdata()
{
    cout << "Enter Three number:" ;
    cin >> a >> b >> c ;
}

void Max::getdata()
{
    cout << "Max number = " ;
    ( a > b && a > c ) ? cout << a : ( b > c ) ? cout << b : cout << c ;
}
int main ()
{
    Max aa ;
    aa.putdata();
    aa.getdata();
}