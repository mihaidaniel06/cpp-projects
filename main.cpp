#include "bits/stdc++.h"
using namespace std;
int citesteoptiune()
{
    int optiune;
    bool inputValid = false;
    while (!inputValid) {

            cin >> optiune;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Input invalid! Mai incercati odata: ";
            }
            else {
                inputValid = true;
            }
        }
        return optiune;
}
int main()
{
    int a,b;
    int optiune;
    char raspuns;

    do
    {
        cout<<"0. Iesire"<<endl;
        cout<<"1. Adunare"<<endl;
        cout<<"2. Scadere"<<endl;
        cout<<"3. Inmultire"<<endl;
        cout<<"4. Impartire"<<endl;
        cout<<"5. Radical de ordinul a din b"<<endl;
        cout<<"6. a la puterea b "<<endl;
        int ok=0;
        cout<<"Ce alegeti?: ";
        optiune=citesteoptiune();
        while(optiune<0 || optiune>6)
        {
            cout<<"Nu exista aceasta operatie, te rog alege un numar intre 0 si 6: ";
            optiune=citesteoptiune();
            cout<<endl;
        }
            switch(optiune)
        {

        case 0:
            cout<<"La revedere"<<endl;
            break;

        case 1:
            int s;
            cout<<"Introduceti primul numar: ";a=citesteoptiune();cout<<endl;
            cout<<"Introduceti al doilea numar: ";b=citesteoptiune();cout<<endl;
            s=a+b;
            cout<<"Adunarea dintre numerele tale este egala cu: "<<s<<endl;
            break;

        case 2:
            int d;
            cout<<"Introduceti primul numar: ";a=citesteoptiune();cout<<endl;
            cout<<"Introduceti al doilea numar: ";b=citesteoptiune();cout<<endl;
            d=a-b;
            cout<<"Diferenta dintre numele alese este egala cu: "<<d<<endl;
            break;

        case 3:
            int p;
            cout<<"Introduceti primul numar: ";a=citesteoptiune();cout<<endl;
            cout<<"Introduceti al doilea numar: ";b=citesteoptiune();cout<<endl;
            p=a*b;
            cout<<"Produsul dintre cele doua numere este egal cu: "<<p<<endl;
            break;

        case 4:
            float r;
            cout<<"Introduceti primul numar: ";a=citesteoptiune();cout<<endl;
            cout<<"Introduceti al doilea numar: ";b=citesteoptiune();cout<<endl;
            r=(float)a/b;
            cout<<"Raportul dintre cele doua numere alese este egal cu: "<<r<<endl;
            break;

        case 5:
            float rad;
            cout<<"Introduceti ordinul radicalului: ";a=citesteoptiune();cout<<endl;
            cout<<"Introduceti baza: ";b=citesteoptiune();cout<<endl;
            rad=pow(b,1.0/a);
            cout<<"Radicalul este egal cu: "<<rad<<endl;
            break;

        case 6:
            long long put;
            cout<<"Introduceti baza: ";a=citesteoptiune();cout<<endl;
            cout<<"Introduceti exponentul: ";b=citesteoptiune();cout<<endl;
            put=pow(a,b);
            cout<<"Puterea aleasa este egala cu: "<<put<<endl;
            break;

        default: cout<<"! Introduceti o optiune din cele de mai sus !"<<endl;
            break;
        }
        if(optiune!=0)
        {
            cout<<"Doriti sa continuati?: y/n"<<endl;
        cin>>raspuns;
        cin.ignore();

        while(raspuns!='n' || raspuns!='N' || raspuns!='y' || raspuns!='Y')
        {
            cout<<"Raspunde cu y daca vreti sau cu n daca nu vreti: ";
            cin>>raspuns;
            if(raspuns!='n' || raspuns!='N' || raspuns!='y' || raspuns!='Y')
                break;
        }

        system("cls");
        if(raspuns=='n' || raspuns=='N')
            cout<<"La revedere!"<<endl;
        }


    }while ((raspuns=='y' || raspuns=='Y') && optiune!=0);

    return 0;
}
