#include <iostream>
using namespace std;

int main()
{
    double flaeche, laenge, hoehe;
    cout<<"Das Programm berechnet durch eingabe der laenge und haehe die flaeche eines dreiecks"<<endl;
    cout<<"laenge =";
    cin>>laenge;
    cout<<"hoehe =";
    cin>>hoehe;
    flaeche=laenge*hoehe/2;
    cout<<"flaeche ="<<flaeche<<endl;


    return 0;
}
