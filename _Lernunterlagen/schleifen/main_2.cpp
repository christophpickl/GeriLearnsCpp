#include <iostream>
using namespace std;

int main()
{   int zahl;char antwort;
    do
{
    cout<<"Zahl = ";
    cin>>zahl;
    if (zahl%2==0)
        cout<<"Die Zahl ist gerade."<<endl;
    else
        cout<<"Die Zahl ist ungerade."<<endl;
    cout<<"Möchten Sie das Programm wiederholen (j/n)?";
    cin>>antwort;




    }while(antwort=='j');
    return 0;
}
