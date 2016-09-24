#include "ponto.h"
#include <iostream>

using namespace std;

Ponto::Ponto()
{
    this->x = 0;
    this->y = 0;
}

Ponto::Ponto(float x, float y)
{
    this->x = x;
    this->y = y;
}

void Ponto::setY(float y)
{
    this->y = y;
}

void Ponto::setXY(float x, float y)
{
    this->x = x;
    this->y = y;
}

float Ponto::getX()
{
    return this->x;
}

float Ponto::getY()
{
    return this->y;
}

void Ponto::setX(float x)
{
    this->x = x;
}

Ponto Ponto::add(Ponto P)
{
    Ponto ret;
    ret.setX(this->getX()+P.getX());
    ret.setY(this->getX()+P.getX());
    return ret;
}

Ponto Ponto::operator+ (Ponto P)
{
    Ponto ret;
    ret.x = this->x + P.x;
    ret.y = this->y + P.y;
    return ret;
}

Ponto Ponto::operator- (Ponto P)
{
    Ponto ret;
    ret.x = this->x - P.x;
    ret.y = this->y - P.y;
    return ret;
}

Ponto Ponto::operator* (Ponto P)
{
    Ponto ret;
    ret.x = this->x * P.x;
    ret.y = this->y * P.y;
    return ret;
}

Ponto Ponto::operator* (float n)
{
    Ponto ret;
    ret.x = this->x * n;
    ret.y = this->y * n;
    return ret;
}

Ponto Ponto::operator/ (Ponto P)
{
    Ponto ret;
    ret.x = this->x / P.x;
    ret.y = this->y / P.y;
    return ret;
}

void Ponto::operator=(Ponto &p)
{
    if (&p == this){
        return;
    }
    if (this = nullptr){
        this->x = p.x;
        this->y = p.y;
        this = new Ponto(x,y);
        return;
    }

}

Ponto Ponto::sub(Ponto P)
{
    Ponto ret;
    ret.x = this->x - P.x;
    ret.y = this->y - P.y;
    return ret;
}

float Ponto::norma()
{
    return sqrt(pow(this->x,2)+pow(this->y,2));
}

void Ponto::translada(float a, float b)
{
    this->x = this->x + a;
    this->y = this->y + b;
}

void Ponto::imprime()
{
    cout << "(" << this->x << "," << this->y << ")" << endl;
}

Ponto operator*(float n, Ponto p)
{
    Ponto ret;
    ret.x = p.x * n;
    ret.y = p.y * n;
    return ret;
}

Ponto operator/(float n, Ponto p)
{
    Ponto ret;
    ret.x = p.x / n;
    ret.y = p.y / n;
    return ret;
}
