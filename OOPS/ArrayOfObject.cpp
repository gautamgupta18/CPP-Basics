#include <iostream>
using namespace std;
class Student
{
    string name ;
    int roll , marks ;
    public:
    void putdata()
    {
        cout << " Name:" ;
        cin.ignore() ;
        getline ( cin , name ) ;
        cout << " Roll number:" ;
        cin >> roll ;
        cout << " Total marks:";
        cin >> marks;
    }
    void getdata()
    {
        cout <<endl << name << "\t" << roll << "\t" << marks ;
    }
};
int main()
{
  Student aa[20] ;
  int n ; 
  cout << "Enter number of students:";
  cin >> n ; 
  for ( int i = 0 ; i < n ; i++ )
  {
    cout << "Enter Student " << i+1 <<endl ;
    aa[i].putdata();
  }
  cout << "Name \t     Roll\t Marks\n";
  cout << "_____________________________________";
  for ( int i = 0 ; i < n ; i++ )
    aa[i].getdata();
}