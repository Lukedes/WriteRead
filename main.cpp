#include <fstream>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
string x[100];
int counter;
int rng;
int c1;
string phrase;
string riga;
string fraseout;
int main(int argc, char** argv) {
fstream xnet, xctr;
cout<<"Dimmi una frase, te ne dirò un altra. \n";
getline(cin,phrase);
cout<<endl;
xctr.open("counter.ctr",ios::in);
xctr>>counter;
xctr.close();
xnet.open("file.censo",ios::in);
rng=rand()%counter ;
xnet>>x[rng];
fraseout==x[rng];
cout<<endl <<"Qualcuno mi ha gia detto: \n";
cout<<fraseout;
getline(xnet,x[rng]);
cout<<endl;
xnet.close();
xnet.open("file.censo",ios::out|ios::app);
c1=counter+1;
x[c1]=phrase;
xnet<<endl;
xnet<<x[c1];
cout<<"Ho memorizzato la tua frase! \n";
xnet.close();
xctr.open("counter.ctr",ios::out);
xctr<<c1;
xctr.close();
cout<<endl <<"Grazie per aver usato questo programma! \n";
system("PAUSE");
return 0;
}
