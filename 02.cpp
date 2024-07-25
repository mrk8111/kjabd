#include <iostream>
using namespace std;

class Esfera {
private:
    int radio;
public:
    Esfera(int);
    void calcularArea();
    void calcularVolumen();        
};

Esfera::Esfera(int _radio){
    radio = _radio;
}

void Esfera::calcularArea(){
    cout << "El area de la esfera es: " << 4*3.14*radio*radio << endl;
}

void Esfera :: calcularVolumen(){
    cout << "El volumen de la esfera es: " << 4/3*(3.14*radio*radio*radio) << endl;
}

int main() {
    Esfera radio1 (5);

    radio1.calcularArea();
    radio1.calcularVolumen();
    
    return 0;
};