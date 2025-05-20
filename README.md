# 🧮 Calculator de Medie - C++

Acest proiect este un program C++ care permite introducerea mai multor candidați cu nume și trei note, calculează media fiecăruia și decide dacă este **ADMIS** sau **RESPINS**. Datele sunt salvate într-un fișier `.csv` ușor de deschis cu Excel sau Google Sheets.

---

## ✅ Funcționalități

- Introduce numele și cele trei note ale fiecărui candidat
- Calculează media aritmetică (cu virgulă)
- Afișează calificativul: `ADMIS` (medie ≥ 5) sau `RESPINS` (medie < 5)
- Salvează toți candidații într-un fișier CSV: `candidati.csv`
- Suportă introducerea mai multor candidați (cu `do-while`)

---

## 🛠️ Cum se rulează

### ▶️ 1. Compilare în terminal (Linux/Windows):

```bash
g++ main.cpp -o calculator
./calculator
