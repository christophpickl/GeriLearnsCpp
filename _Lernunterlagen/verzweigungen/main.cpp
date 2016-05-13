#include <iostream>
using namespace std;

int main()
{    int alter;
     cout<<"Bitte geben Sie Ihr Alter ein: ";
     cin>>alter;
     if (alter>=18)
         cout<<"Sie sind volljährig!\n";
     else
         if (alter<0)
             cout<<"Falsche Eingabe!\n";
     else
         cout<<"Sie sind minderjährig!\n";


    return 0;
}
