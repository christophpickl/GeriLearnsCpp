#include <iostream>
#include<math.h>
using namespace std;

int main()
{

    double seitenlaenge, diagonale;
   cout<<"Das Progamm berechnet aus der Seitenlaenge eines Quardrats dessen Diagonale."<<endl;
   cout<<"Seitenlaenge =";
   cin>>seitenlaenge;
   diagonale=sqrt(2*seitenlaenge*seitenlaenge);
   cout<<"Diagonale ="<<diagonale<<endl;
   return 0;
}
