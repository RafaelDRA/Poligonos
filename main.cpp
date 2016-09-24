#include <iostream>
#include "ponto.h"

using namespace std;

int main()
{
    Ponto p;
    p.setXY(2,2);
    Ponto p1;
    p1.setXY(3,3);
    Ponto p2 = p.add(p1);
    p2.imprime();
    Ponto p3 = p2 + p1;
    p3.imprime();
    p3 = p3*2;
    p3.imprime();
    cout << p.norma() << endl;
    p.translada(1,1);
    p.imprime();
}
