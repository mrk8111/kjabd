#include <iostream>
#include <cmath>
using namespace std;

class Triangulo {
private:
    int lado;
public:
    Triangulo(int);
    void setLado(int l);
    int getLado();
    int perimetro();
};

Triangulo::Triangulo(int _lado){
    lado = _lado;
}

void Triangulo::setLado(int l){
    lado = l;
}

int Triangulo::getLado(){
    return lado;
}

int Triangulo::perimetro(){
    return (lado+lado+lado);
}

int main(){
    Triangulo t1(5);
    Triangulo t2(6);

    cout << "La informacion del T1 es: " << endl;
    cout << "El lado del T1 es: " << t1.getLado() << endl;
    cout << "El perimetro del T1 es: " << t1.perimetro() << endl;

    cout << "-------------------------------------------"<< endl;

    cout << "La informacion del T2 es: " << endl;
    cout << "El lado del T2 es: " << t2.getLado() << endl;
    cout << "El perimetro del T2 es: " << t2.perimetro() << endl;

    cout << "-------------------------------------------"<< endl;

    t1.setLado(7);

    cout << "El nuevo valos del lado de T1 es:" << t1.getLado() << endl;
    cout << "El nuevo perimetro de T1 es: " << t1.perimetro() << endl;

    return 0;
}