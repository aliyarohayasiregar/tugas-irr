void bingkai(int p, int l, int x, int y, int c)
{
    p-=1;
    l-=1;
    textcolor(c);
    for (int a = 0; a <= p; a++)
    {
        alya(x+a, y);
        printf("%c", 219);
        alya(x + a, y + l);
        printf("%c", 219);
    }

    for (int b = 0; b < l; b++)
    {
        alya(x, y + b);
        printf("%c", 219);
        alya(p + x, y + b);
        printf("%c", 219);
    }
}
void backgound(){
    for(int x=1;x<120;x++){
        for(int y=1;y<=40;y++){
            textcolor(0);printf(" ");
        }
    }
}


void tampilan(){   
    system("cls");
    bingkai(120, 40, 0, 0,3);
    bingkai(120, 9, 0, 0,3);
 
        for (int a = 5; a <= 25; a++){
        for(int b=1;b<=3;b++){
                setcolor(b,0);
                set_background_color(15);
        alya(a,2);printf(" **  **  **  ******   **         *******   *******   *       *   ******");
        alya(a,3);printf(" **  **  **  **       **         **        **   **   * *   * *   **      ");
        alya(a,4);printf(" **  **  **  ******   **         **        **   **   **  *  **   ******");
        alya(a,5);printf(" **  **  **  **       **         **        **   **   **     **   **      ");
        alya(a,6);printf(" **********  ******   ********   *******   *******   **     **   ******");
        Sleep(30);
        }
        }

}

void tampilan2(){    
    system("cls");
    bingkai(120, 40, 0, 0,3);

}
