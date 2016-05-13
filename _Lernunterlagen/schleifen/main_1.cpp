#include <iostream>
using namespace std;

int main()
{  int summe=0; char antwort;
    do
   {for(int i=1;i<=20;i=i+1)
   {cout<<i<<" ";
    summe=summe+i;
}
   cout<<endl;
   cout<<"summe= "<<summe<<endl;
   cout<<"Möchten Sie das Programm wiederholen (j/n)";
   cin>>antwort;
   summe=0;
    }while(antwort=='j');
    return 0;
}
