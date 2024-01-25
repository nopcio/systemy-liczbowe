#include <iostream>
#include <string>
using namespace std;

string dec2p(int liczba, int podstawa){
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
    int liczbaDec;
    cout << "podaj liczbe w systemie dziesietnym: ";
    cin >> liczbaDec;
    cout << "system dwojkowy: " << dec2p (liczbaDec,2) <<endl;
    cout << "system osemkowy: " << dec2p (liczbaDec,8) << endl;
    cout << "system szesnastkowy: " << dec2p(liczbaDec, 16) << endl;
    return 0;
}
