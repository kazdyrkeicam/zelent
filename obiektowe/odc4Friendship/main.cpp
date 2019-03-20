#include <iostream>
#include "friend.h"

using namespace std;

void sedzia(Punkt s, Prostokat p){

    if((s.x >= p.x) && (s.x <= p.x + p.szerokosc) &&
       (s.y >= p.y) && (s.y <= p.y + p.wysokosc))

        cout << endl << "punkt " << s.nazwa << " nalezy do " << p.nazwa;
    else
        cout << endl << "punkt " << s.nazwa << " nie nalezy do " << p.nazwa;
 }

int main(){
    Punkt pkt1("A", 3, 1);
    
    Prostokat p1("Prostokat", 0, 0, 6, 4);
    
    sedzia(pkt, p);
    return 0;
}
