#include <iostream>
#include <string>
using namespace std;

string sl(int liczba, int podstawa){
    string wynik="";
    int reszta;
    if(liczba==0) wynik="0";
    while (liczba>0){
        reszta=liczba%podstawa; //reszta z dzielenia
        if(reszta<10) wynik=char(reszta+48)+wynik; // 0 w tabeli kodow ascii jest na 48 pozycji, char sprawia ze reszte odczytuje w tabeli ascii bo funckji nie da sie dodawac (string int) 
        else wynik= char(reszta+48+7)+wynik;
        liczba=liczba/podstawa;
    }

    return wynik;
}

int main() {
    int liczbadziesietna;
    cout << "podaj liczbe w systemie dziesietnym: ";
    cin >> liczbadziesietna;
    cout << "system dwojkowy: " << sl (liczbadziesietna,2) <<endl;
    cout << "system osemkowy: " << sl (liczbadziesietna,8) << endl;
    cout << "system szesnastkowy: " << sl(liczbadziesietna, 16) << endl;
    return 0;
}
