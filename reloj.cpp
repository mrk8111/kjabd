#include <iostream>
using namespace std;

class Hora {
private: 
    int horas;
    int minutos;
    int segundos;
public:
    Hora(int, int , int);
    void setHora(int _horas, int _minutos, int _segundos);
    string getHora();
    void mostrarHora();        
};

Hora::Hora(int _horas, int _minutos, int _segundos){
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}

void Hora::setHora(int _horas, int _minutos, int _segundos){
    if (_horas >= 0 and _horas < 24){
        horas = _horas;
    }
    else{
        horas = 0;
    }


    if (_minutos >= 0 and _minutos < 60){
        minutos = _minutos;
    }
    else{
        minutos = 0;
    }


    if (_segundos >= 0 and _segundos < 60){
        segundos = _segundos;
    }
    else{
        segundos = 0;
    }
}

string Hora::getHora(){
    string h = to_string(horas);
    string m = to_string(minutos);
    string s = to_string(segundos);

    return h + " : " + m + " : " + s;
}

void Hora::mostrarHora(){
    cout << "La hora es: " << getHora() << endl;
}

int main() {
    Hora h1(13,33,45);
    cout << "Hora normal: " << endl;
    h1.mostrarHora();

    Hora h2(0,0,0);
    cout << "Hora incorrecta: " << endl;
    h2.mostrarHora();

    return 0;
}