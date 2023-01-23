/*
	Name:Matrice 
	Copyright: Colamonico Chiarulli
	Author: Baccellieri Davide
	Date: 13/12/22 13:36
	Description: Scrivere un programma per caricare dei numeri interi in una matrice di numeri interi con un ciclo for.
                 Successivamente scrivere un ciclo per stampare gli elementi della matrice a video.
*/



#include<iostream>
using namespace std;
int main ()
{
const int r=2;
const int c=3;
int contr=0;
int contc=0;
int matrice[contr][contc];
cout<<"ESERCIZIO MATRICI "<<endl;
for(contr=0;contr<r;contr++) {
   for(contc=0;contc<c;contc++) {
        cout<<"inserisci l\'elemento nella posizione "<<contr<<" , "<<contc<< " :";
       cin>>matrice[contr][contc];
}
}
cout<<"STAMPA A VIDEO";
for(contr=0;contr<r;contr++) {
for(contc=0;contc<c;contc++) {
cout<<" l\'elemento nella posizione "<<contr<<" , "<<contc<<" e\': ";
cout<<matrice[contr][contc]<<endl;
}
}
cout<< "FINE";
return 0;
}
