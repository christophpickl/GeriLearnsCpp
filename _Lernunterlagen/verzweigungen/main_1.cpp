#include <iostream>
using namespace std;


int main()
{float zahl;
    cout<<"Bitte geben Sie eine ganze Zahl ein: ";
    cin>>zahl;
    if (zahl<0)
        cout<<"Die Zahl ist negativ!\n";
    else
        if (zahl==0)
            cout<<"Die Zahl ist 0!\n";
        else
            cout<<"Die Zahl ist positive!\n";

    return 0;
}
