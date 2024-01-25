#include <iostream>

using namespace std;
int main ()
{
    int wysokosc, ilosc;
    cin >> wysokosc >> ilosc;
    
    for(int i=0; i<ilosc; i++){
        for(int j=0; j<wysokosc+1; j++){
            for(int k=0; k<j+wysokosc; k++){
                if(k<=wysokosc-j)
                    cout << ' ';
                else
                    cout << 'x';
            }
            cout << '\n';
        }
    }




    return 0;
}

