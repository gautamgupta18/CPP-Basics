#include <iostream>
using namespace std;
class demo
{
    int x , y ;
    static int z ;
    public:
    void getdata()
    {
        cout <<"Enter two value:" ;
        cin >> x >> y ;
        z++ ;
    }
    void putdata()
    {
        cout << "\nX = "<< x << "\t Y = " << y << "\t Z = " << z ;
    }
};
int demo::z;
int main()
{
    demo aa, bb ;
    aa.getdata();
    bb.getdata();
    aa.putdata();
    bb.putdata();
}
