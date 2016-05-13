#include <iostream>
using namespace std;

int main()
{
    int zahl1, zahl2, ergebnis, rest;
    cout<<"geben sie zwei ganze zahlen ein:"<<endl;
    cout<<"zahl1 = ";
    cin>>zahl1;
    cout<<"zahl2 = ";
    cin>>zahl2;
    ergebnis=zahl1/zahl2;
    rest=zahl1%zahl2;
    cout<<"ergebnis = "<<ergebnis<<endl;
    cout<<"rest= "<<rest<<endl;
    return 0;
}
