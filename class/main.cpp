#include <iostream>

using namespace std;

class CLibro{
    private:
        string titulo;
        string genero;
        int numeroPaginas;
    
    public:
        void setNumeroPaginas(int a);
        int getNumberoPaginas();
        void setTitulo(string str);
        string getTitulo();
        void setGenero(string str);
        string getGenero();
        void print();
};

void CLibro::setNumeroPaginas(int a){
    numeroPaginas = a;
}

// TODO agregar los demas metodos

void CLibro::print(){
    cout << titulo;
    cout << " - ";
    cout << genero;
    cout << " #";
    cout << numeroPaginas;
    cout << endl;
}

int main()
{
    CLibro libro;
    libro.setNumeroPaginas(600);
    libro.print();

    return 0;
}