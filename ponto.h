#ifndef PONTO_H
#define PONTO_H

#include <cmath>

class Ponto
{
public:
    Ponto();
    void setX(float);
    void setY(float y);
    void setXY(float x, float y);
    float getX();
    float getY();
    Ponto add(Ponto P);
    Ponto operator+ (Ponto P);
    Ponto operator- (Ponto P);
    Ponto operator* (Ponto P);
    Ponto operator* (float n);
    Ponto operator/ (Ponto P);
    Ponto sub(Ponto P);
    float norma();
    void translada(float a, float b);
    void imprime();

    //função amiga não é da classe mas acessa os dados privados da classe.
    friend Ponto operator* (float n, Ponto v);
    friend Ponto operator/ (float n, Ponto v);

    void operator= (Ponto &p);

private:
    float x;
    float y;
};



#endif // PONTO_H
