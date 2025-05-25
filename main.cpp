#include "bits/stdc++.h"
using namespace std;
ifstream fin("produse.txt");

const string parola_corecta = "admin123";

bool autentificare() {
    string parola_introdusa;
    int incercari = 3;

    while (incercari > 0) {
        cout << "Introduceti parola pentru acces: ";
        cin >> parola_introdusa;

        if (parola_introdusa == parola_corecta) {
            cout << "Acces permis!\n";
            return true;
        } else {
            incercari--;
            cout << "Parola incorecta! Incercari ramase: " << incercari << "\n";
        }
    }

    cout << "Acces blocat. Prea multe incercari gresite.\n";
    return false;
}

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
    char raspuns='y';int optiune;
    bool dasaunu=autentificare();

        struct produs {
        char nume[100];
        float pret;
        int stoc;
    };
    produs v[1000];
    int n=1;
    while(fin>>v[n].nume>>v[n].pret>>v[n].stoc)
        n++;
    fin.close();
    if(dasaunu && (raspuns=='y' || raspuns=='Y'))
    {
        raspuns='n';
        do
    {
        cout<<"Salutari, Admin! \n";
        cout<<"0. Iesire \n";
        cout<<"1. Modificarea informatiilor \n";
        cout<<"2. Adaugare de produse \n";
        cout<<"3. Afisare produse \n";
        cout<<"4. Stergere produs \n";
        cout<<"Cu ce te pot ajuta?: ";
        optiune=citesteoptiune();
        while(!(optiune<=4 && optiune>=0))
        {
            cout<<"Alegeti una dintre cele 5 optiuni 0/1/2/3/4: ";optiune=citesteoptiune();
        }
        cout<<endl;
        switch(optiune)
        {

        case 0:
            system("cls");
            cout<<"La revedere!"<<endl;
            break;

        case 1:
            {
                    system("cls");
                char numeprodus[100];
                int nr=0;
                cout<<"Spuneti-mi numele produsului care necesita modificari: ";cin>>numeprodus;cin.ignore();
                for(int i=1;i<=n && nr==0;i++)
                    if(strcmp(numeprodus,v[i].nume)==0)
                        nr=i;
                while(nr==0)
                {
                    cout<<"Acest produs nu exista in document, daca doriti selectati optiunea 2 pentru a il adauga. \n";
                    cout<<"Spuneti-mi numele altui produs poate acesta exista: ";cin>>numeprodus;cin.ignore();
                    for(int i=1;i<=n && nr==0;i++)
                    if(strcmp(numeprodus,v[i].nume)==0)
                        nr=i;
                }
                int schimbare;
                cout<<"Ce doriti sa schimbati la "<<numeprodus<<": \n";
                cout<<"1. Nume \n";
                cout<<"2. Pret \n";
                cout<<"3. Stoc \n";
                schimbare=citesteoptiune();
                switch(schimbare)
                {
                case 1:
                    char numenou[100];
                    cout<<"Ce nume doriti sa puneti?: ";cin>>numenou;cin.ignore();
                    strcpy(v[nr].nume,numenou);
                    cout<<"Schimbare aplicata cu succes! \n";

                break;
                case 2:
                    float pretnou;
                    cout<<"Ce pret doriti sa puneti?: ";cin>>pretnou;
                    v[nr].pret=pretnou;
                    cout<<"Schimbare aplicata cu succes! \n";
                    break;
                case 3:
                    int stocnou;
                    cout<<"Cat stoc mai avem?: ";cin>>stocnou;
                    v[nr].stoc=stocnou;
                    cout<<"Schimbare aplicata cu succes! \n";
                    break;
                }
                break;
            }

        case 2:
            {
                char numeadaugat[100];
                float pretadaugat;
                int stocadaugat;
                system("cls");
                cout<<"Spuneti-mi numele produsului pe care doriti sa-l adaugati: ";cin>>numeadaugat;cout<<endl;
                cout<<"Spuneti-mi pretul produsului: ";cin>>pretadaugat;cout<<endl;
                cout<<"Spuneti-mi stocul acestui produs: ";cin>>stocadaugat;cout<<endl;
                strcpy(v[n].nume,numeadaugat);
                v[n].pret=pretadaugat;
                v[n].stoc=stocadaugat;
                n++;
                cout<<"Produsul a fost adaugat cu succes!"<<endl;
               break;
            }
        case 3:
            {
                cout<<"Nr. Pret Stoc"<<endl;
                for(int j=1;j<n;j++)
                    cout<<j<<". "<<v[j].nume<<" "<<v[j].pret<<" "<<v[j].stoc<<endl;
                break;
            }
        case 4:
            {
                int nr;
                char produssters[100];
                 cout<<"Spuneti-mi numele produsului care doriti sa il stergeti: ";cin>>produssters;cin.ignore();
                for(int i=1;i<=n && nr==0;i++)
                    if(strcmp(produssters,v[i].nume)==0)
                        nr=i;
                while(nr==0)
                {
                    cout<<"Acest produs nu exista in document, daca doriti selectati optiunea 2 pentru a il adauga. \n";
                    cout<<"Spuneti-mi numele altui produs poate acesta exista: ";cin>>produssters;cin.ignore();
                    for(int i=1;i<=n && nr==0;i++)
                    if(strcmp(produssters,v[i].nume)==0)
                        nr=i;
                }
                for(int d=nr;d<n;d++)
                {
                    strcpy(v[d].nume,v[d+1].nume);
                    v[d].pret=v[d+1].pret;
                    v[d].stoc=v[d+1].stoc;
                }
                n--;
                cout<<"Stergerea a fost efectuata cu succes!"<<endl;
            }

        }

        ofstream fout("produse.txt");
        for(int h=1;h<n;h++)
            fout<<v[h].nume<<" "<<v[h].pret<<" "<<v[h].stoc<<endl;
        fout.close();

        if(optiune!=0)
        {
            cout<<"Doriti sa mai va ajut cu ceva?: (y/n)";
            cin>>raspuns;
            cin.ignore();
            while(raspuns!='n' && raspuns!='N' && raspuns!='Y' && raspuns!='y')
            {
                cout<<"Spuneti-mi va rog daca da sau nu, scrieti-mi y daca doriti sa va ajut, iar daca nu doriti scrieti n: ";cin>>raspuns;cin.ignore();
                if(raspuns=='n' || raspuns=='N' || raspuns=='y' || raspuns=='Y')
                    break;
            }
        }
        system("cls");
        if(optiune==0)
            cout<<"La revedere! \n";
        if (raspuns=='n' || raspuns=='N' && optiune!=0)
            cout<<"La revedere";
    }while(raspuns=='y' || raspuns=='Y');
    }
    return 0;
}
