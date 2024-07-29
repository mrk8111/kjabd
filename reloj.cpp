#include <iostream>
using namespace std;

class Hora {
private:
    int hora;
    int minutos;
    int segundos;
public:
    Hora(int, int, int);
    void mostrarHora();    
};

Hora::Hora(int _hora, int _minutos, int _segundos){
    if (_hora >= 0 and _hora < 24){
        hora = _hora;
    }
    else{
        hora = 0;
    }


    if (_minutos >= 0 and _minutos < 60){
        minutos = _minutos;
    }
    else{
        minutos = 0;
    }


    if (_segundos >= 0 and _segundos <60){
        segundos = _segundos;
    }
    else{
        segundos = 0;
    }  
}

void Hora::mostrarHora(){
    cout << "La hora es: " << hora << " : " << minutos << " : " << segundos << endl;
}

int main() {
    Hora h1(13,33,33);
    cout << "Hora normal: " << endl;
    h1.mostrarHora();

    Hora h2(25,61,61);
    cout << "Hora si tiene valores no validos: " << endl;
    h2.mostrarHora();

    return 0;
}