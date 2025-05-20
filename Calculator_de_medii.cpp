#include "bits/stdc++.h"
using namespace std;

int main()
{
    ofstream f("candidati.csv");
    f<<"Nume,Nota1,Nota2,Nota3,Medie,Calificativ"<<endl;

    char raspuns;
    do
    {
        int nota1,nota2,nota3;
        float medie;
        char nume[100],calificativ[15]="";

        cout<<"Introduceti numele: ";
        cin.getline(nume,100);

        cout<<"Introduceti notele: ";
        cin>>nota1>>nota2>>nota3;

        medie=(nota1+nota2+nota3)/3.0;
        if(medie<5)
            strcpy(calificativ,"RESPINS");
        else
            strcpy(calificativ,"ADMIS");

        f<<nume<<","<<nota1<<","<<nota2<<","<<nota3<<","<<medie<<","<<calificativ<<endl;

        cout<<"Mai adaugam un candidat? (y/n) ";
        cin>>raspuns;
        cin.ignore();

    } while(raspuns=='y' || raspuns =='Y');

    f.close();

    return 0;
}
