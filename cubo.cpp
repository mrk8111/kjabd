#include <iostream>
#include <cmath>
using namespace std;

class Cubo {
private:
    double lado;
public:
    Cubo(double);
    void setLado(double l);
    double getLado();
    double Volumen();
};

Cubo::Cubo(double _lado){
    lado = _lado;
}

void Cubo::setLado(double l) {
    lado = l;
}

double Cubo::getLado(){
    return lado;
}

double Cubo::Volumen(){
    return pow(lado,3);
}

int main() {
    Cubo cubo1(30);
    Cubo cubo2(33);

    cout << "Datos del cubo 1: " << endl;
    cout << "Lado: " << cubo1.getLado() << endl;
    cout << "Volumen: " << cubo1.Volumen() << endl;

    cout << "------------------------------"<<endl;

    cout << "Datos del cubo 2: "<< endl;
    cout << "Lado: " << cubo2.getLado() << endl;
    cout << "Volumen: " << cubo2.Volumen() << endl;

    cout << "------------------------------"<<endl;

    cubo1.setLado(40);
    cout << "Nuevo lado del cubo 1: " << cubo1.getLado() << endl;
    cout << "Nuevo voluemn del cubo 1: " << cubo1.Volumen() << endl;
}