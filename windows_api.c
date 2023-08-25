#include <windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>
#include<string.h>
#define outputHandle GetStdHandle(STD_OUTPUT_HANDLE)

#define BLACK 0
#define DARK_BLUE 1
#define DARK_GREEN 2
#define DARK_CYAN 3
#define DARK_RED 4
#define DARK_PURPLE 5
#define DARK_YELLOW 6
#define DARK_WHITE 7

#define GRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PURPLE 13
#define YELLOW 14
#define WHITE 15

int text_color = FOREGROUND_INTENSITY;
int background_color = 0;

void alya(int x, int y)
{
    COORD position = {x, y};
    SetConsoleCursorPosition(outputHandle, position);
}

void textcolor(int color)
{
    SetConsoleTextAttribute(outputHandle, color | (background_color << 4));
    text_color = color;
}

void warna(int color)
{
    SetConsoleTextAttribute(outputHandle, color | (color << 4));
    background_color = color;
}

void set_background_color(int co)
{
    SetConsoleTextAttribute(outputHandle, text_color | (co << 4));
    background_color = co;
}


void setcolor(int text, int background){
    SetConsoleTextAttribute(outputHandle, background * 16 + text);
}

void pause(){
    system("pause>nul");
}