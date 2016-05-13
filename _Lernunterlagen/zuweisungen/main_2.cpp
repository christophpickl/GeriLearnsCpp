#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    double Flaeche, Umfang, Radius;
    cout<<"Das Programm berechnet Umfang und Flaeche durch eingabe des Radius."<<endl;
    cout<<"Radius =";
    cin>>Radius;
    Flaeche=Radius*Radius*M_PI,Umfang=2*Radius*M_PI;
    cout<<"Flaeche ="<<Flaeche<<endl;
    cout<<"Umfang ="<<Umfang<<endl;

    return 0;
}
