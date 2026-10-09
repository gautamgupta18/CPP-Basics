#include <iostream>
using namespace std;
class AddTime
{
    int hour , minute ;
    public:
    void puttime()
    {
        cout << "Hour:" ;
        cin >> hour ;
        cout << "Minute:" ;
        cin >> minute ;  
    }
    void gettime()
    {
        cout << hour << "   :   " << minute << endl ;
    }
    void add(AddTime , AddTime );
};
void AddTime::add(AddTime t1 , AddTime t2)
{
   minute = ( t1.minute + t2.minute ) % 60 ;
   hour = ( t1.minute + t2.minute ) / 60 ;
   hour += t1.hour + t2.hour ;
}
int main()
{
    AddTime t1 , t2 , t3 ;
    cout << "Enter First\n" ;
    t1.puttime();
    cout << "Enter second\n" ;
    t2.puttime();
    t3.add( t1 , t2 );
    cout << "\nHour : Minute\n";
    t1.gettime();
    t2.gettime();
    cout << "After Sum\n";
    t3.gettime();
}