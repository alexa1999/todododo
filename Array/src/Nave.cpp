#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include "Nave.h"
#define ARRIBA 72

#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
using namespace std;

Nave::Nave(int _x,int _y)
{
    x = _x;
    y = _y;
}
void Nave::gotoxy1(int x, int y)
{
    HANDLE identi;
    identi = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos_cursor;
    pos_cursor.X = x;
    pos_cursor.Y = y;

    SetConsoleCursorPosition(identi,pos_cursor);
}
void Nave::ocultar()
{
    HANDLE identi;
    identi = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor;
    cursor.dwSize = 50;
    cursor.bVisible = false;

    SetConsoleCursorInfo(identi, &cursor);
}
void Nave::crear(){
    gotoxy1(x,y);printf("  %c",30);
    gotoxy1(x,y+1);printf("%c%c%c%c%c",30,40,207,41,30);
    gotoxy1(x,y+2);printf("%c%c%c%c%c",197,200,178,188,197);
}
void Nave::borrar(){
    gotoxy1(x,y);printf("      ");
    gotoxy1(x,y+1);printf("      ");
    gotoxy1(x,y+2);printf("      ");
}
void Nave::mover(){
    if(kbhit()){
        char tecla = getch();
        borrar();
        if(tecla == 'a' && x>2)x--;
        if(tecla == 'd' && x+5<78)x++;
        if(tecla == 'w' && y>3)y--;
        if(tecla == 's'&& y+3<33)y++;
        //if(tecla == 'e')vidas--;
        if(tecla== IZQUIERDA)x--;
        if(tecla== DERECHA)x++;
        if(tecla== ARRIBA)y--;
        if(tecla==ABAJO)y++;
        crear();
    }
}

