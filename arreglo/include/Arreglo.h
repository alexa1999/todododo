#ifndef ARREGLO_H
#define ARREGLO_H


class Arreglo
{

        int tam;
        int *data;
    public:
        void rellenar();
        int imprimir();

        void insertarAtras(int);
        void insertar(int,int);
        void eliminar(int y);
        void vaciar();
        Arreglo(int tam,int arr[]);

};

#endif // ARREGLO_H
