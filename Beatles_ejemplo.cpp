#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Album {
private:
    string titulo;
    string fechaLanzamiento;
    vector<string> canciones;
public:
    Album(string, string, vector<string>);
    string getTitulo();
    string getFechaLanzamiento();
    vector<string> getCanciones();
    void mostrarAlbumInfo();
};

Album::Album(string _titulo, string _fechaLanzamiento, vector<string> _canciones ){
    titulo = _titulo;
    fechaLanzamiento = _fechaLanzamiento;
    canciones = _canciones;
};

string Album::getTitulo(){
    return titulo;
}

string Album::getFechaLanzamiento(){
    return fechaLanzamiento;
}

vector<string> Album::getCanciones(){
    return canciones;
}

void Album::mostrarAlbumInfo(){
    cout << "TItulo: " << titulo << endl;
    cout << "Fecha de lanzamiento: " << fechaLanzamiento << endl;
    for (size_t i = 0; i < canciones.size(); ++i){
        cout <<" - " << canciones[i] << endl;
    }     
}


class Coleccion {
private:
    vector<Album> albums;
public:
    void agregarAlbum(Album album);
    void mostrarTodosLosAlbums();
    Album* buscarAlbumPorTitulo(string titulo);    
};

void Coleccion::agregarAlbum(Album album){
    albums.push_back(album);
}

void Coleccion::mostrarTodosLosAlbums(){
    for (size_t i = 0; i < albums.size(); i++){
        albums[i].mostrarAlbumInfo();
        cout << "-----------------------" << endl;
    }
}

Album* Coleccion::buscarAlbumPorTitulo(string titulo) {
    for (size_t i = 0; i < albums.size(); ++i){
        if (albums[i].getTitulo() == titulo){
            return &albums[i];
        }
    }
    return nullptr;
}

int main() {
    Album abbeyRoad("Abbey Road", "26 de Septiembre de 1969", {"Come Togueter", "Something", "Oh Darling!"});
    Album revolver("Revolver", "5 deAgosto de 1966", {"Eleanor Rigby", "Yellow Submarine", "Good Day Sunshine"});

    Coleccion coleccionBeatles;
    coleccionBeatles.agregarAlbum(abbeyRoad);
    coleccionBeatles.agregarAlbum(revolver);

    cout << "Todos los albums: " << endl;
    coleccionBeatles.mostrarTodosLosAlbums();

    string tituloBusqueda = "Abbey Road";
    Album* albumEncontrado = coleccionBeatles.buscarAlbumPorTitulo(tituloBusqueda);
    if (albumEncontrado) { 
        cout << "Album Encontrado: " << endl;
        albumEncontrado->mostrarAlbumInfo();
    }
    else {
        cout << "Album no encontrado" << endl;
    }
    return 0;
}