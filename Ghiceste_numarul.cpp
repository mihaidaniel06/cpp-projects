#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int numar_secret = rand() % 100 + 1;

    int incercare;
    int numar_incercari = 0;

    cout << "Ghiceste numarul (intre 1 si 100): ";

    do {
        cin >> incercare;
        numar_incercari++;

        if (incercare < numar_secret) {
            cout << "Prea mic! Incearca din nou: ";
        } else if (incercare > numar_secret) {
            cout << "Prea mare! Incearca din nou: ";
        } else {
            cout << "Ai ghicit! Numarul era " << numar_secret << " si ai reusit in " << numar_incercari << " incercari!" << endl;
        }

    } while (incercare != numar_secret);

    return 0;
}
