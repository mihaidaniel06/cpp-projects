# Gestiune Produse - Proiect C++

Acest proiect este o aplicație de tip consolă scrisă în C++ pentru gestionarea unui stoc de produse. Este destinat pentru uz educațional, fiind un exemplu simplu și funcțional de lucru cu fișiere, structuri și meniuri în C++.

## Funcționalități

- **Autentificare cu parolă** (maxim 3 încercări)
- **Afișarea listei de produse** (cu nume, preț și stoc)
- **Adăugarea unui produs nou**
- **Modificarea unui produs existent**:
  - Nume
  - Preț
  - Stoc
- **Ștergerea unui produs**
- **Persistența datelor** în fișier (`produse.txt`)
- **Validarea inputurilor** pentru a preveni erori de introducere

## Structura codului

- Folosește o structură `produs` pentru a stoca informațiile despre fiecare produs.
- Datele sunt citite și scrise din/in fișierul `produse.txt`.
- Meniul principal permite utilizatorului să navigheze prin opțiuni și să efectueze operații asupra stocului.

## Cum se folosește

1. La rulare, se cere introducerea parolei. Parola corectă este: `parola`
2. După autentificare, se afișează un meniu cu opțiuni numerotate.
3. Utilizatorul alege o opțiune și urmează pașii din consolă.
4. Toate modificările sunt salvate automat în fișierul `produse.txt`.

## Exemplu format fișier `produse.txt`

