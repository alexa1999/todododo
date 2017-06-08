#ifndef NAVE_H
#define NAVE_H


class Nave
{
    private:
        int x,y;

    public:
        Nave(int ,int);
        void gotoxy1(int,int);
        void ocultar();
        void crear();
        void borrar();
        void mover();
};

#endif // NAVE_H
