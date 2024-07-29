#include <iostream>
#include <cmath>
using namespace std;

class Triangulo {
private:
    double lado;
public:
    Triangulo(double);
    void setlado(double l);
    double getLado();
    double perimetro();             
};

Triangulo::Triangulo(double _lado){
    lado = _lado;
}

void Triangulo::setlado(double l){
    lado = l;
}

double Triangulo::getLado(){
    return lado;
}

double Triangulo::perimetro(){
    return (lado+lado+lado);
}

int main() {
    Triangulo t1(2.5);
    Triangulo t2(2.3);

    cout << "Datos del triangulo 1: " << endl;
    cout << "El lado del triangulo 1 mide: " << t1.getLado() << endl;
    cout << "El perimetro del triangulo 1 es: " << t1.perimetro() <<endl;

    cout << "-------------------------------" << endl;

    cout << "Datos del triangulo 2: " << endl;
    cout << "El lado del triangulo 2 mide: " << t2.getLado() << endl;
    cout << "El perimetro del triangulo 2 es: " << t2.perimetro() << endl;

    t1.setlado(5);

    cout << "El nuevo valor del lado del triangulo 1 es: " << t1.getLado() << endl;
    cout << "El nuevo perimetro del triangulo 1 es: " << t1.perimetro() << endl;

    return 0;
};