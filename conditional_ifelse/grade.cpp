#include<iostream>
using namespace std;
int main()
{
    int m1, m2, m3, m4, m5;
    cout << "Enter your marks in maths:";
    cin >> m1;
    cout << "Enter your marks in science:";
    cin >> m2;
    cout << "Enter your marks in social science:";
    cin >> m3;
    cout << "Enter your marks in hindi:";
    cin >> m4;
    cout << "Enter your marks in Sanskrit:";
    cin >> m5;
    cout <<"\n Marks:" ;
    cout << "\n Maths = " << m1 ;
    cout << "\n Science = " << m2 ;
    cout << "\n Social science = " << m3 ;
    cout << "\n Hindi = " << m4 ;
    cout << "\n Sanskrit = " << m5 ;
    int total = m1 + m2 + m3 + m4 + m5 ;
    cout << "\n Total Marks = " << total ;
    float percentage = total / 5 ;
    cout <<"\n Percentage = " << percentage ;
    if ( percentage >= 60)
    cout << "\n First Devison";
    else if ( percentage >= 45)
    cout << "\n Second Devison";
    else if ( percentage >= 30)
    cout << "\n Third  Devison";
    else
    cout << "Fail";
}