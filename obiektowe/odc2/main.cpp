#include <iostream>
#include "pytanie.h"

using namespace std;

int main(){
    liczbaPytan = 5;
    Pytanie p[liczbaPytan];
    int suma = 0;
    
    for(int i = 0; i < liczbaPytan; ++i){
        p[i].nrPytania = i + 1;
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
        suma += p[i].punkt;
    }
    
    cout << "KONIEC\npunkty = " << suma;
    return 0;
}
