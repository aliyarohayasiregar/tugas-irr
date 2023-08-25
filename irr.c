#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "windows_api.c"
#include "tampilan.c"

#include <stdbool.h>
#include <math.h>


int main()
{
    set_background_color(15);
    tampilan();
    bingkai(60, 10, 35, 19, 3);

    int hargaBarang, dpBarang, cicilan, option, bulan;
    alya(42,21);printf("Masukkan harga barang  : ");
    scanf("%d", &hargaBarang);
    alya(42,22);printf("Masukkan DP barang     : ");
    scanf("%d", &dpBarang);
    alya(42,23);printf("Masukkan jumlah cicilan: ");
    scanf("%d", &cicilan);
    alya(42,24);printf("Masukkan jumlah opsi   : ");
    scanf("%d", &option);
    alya(42,25);printf("Masukkan jumlah bulan  : ");
    scanf("%d", &bulan);

    double rasio[5] = {10, 15, 20, 25, 30};
    double interest[option];
    double pv[option][bulan];
    double pvTotal[option];
    double npv[option];

    for (int a = 0; a < option; a++)
    {
        interest[a] = (rasio[a] / 100.0) / (bulan + 1);
    }

    for (int a = 0; a < option; a++)
    {
        for (int b = 0; b < bulan; b++)
        {
            pv[a][b] = cicilan / pow((1 + interest[a]), b + 1);
            pvTotal[a] += pv[a][b];
        }
    }

    for (int a = 0; a < option; a++)
    {
        npv[a] = pvTotal[a] - (hargaBarang - dpBarang);
    }


    system("cls");
    bingkai(30,8,3,2,3);

    alya(15,3);printf("NPV");
    int x=0;
    for (int a = 0; a < option; a++)
    {
        alya(10,4+a);printf("NPV %d%% =%d\n", x+=5,(int)npv[a]);
    }

    bingkai(30,8,35,2,3);
    int z=0;
    for (int a = 0; a < option; a++)
    {
        
        alya(36,4+a);printf("Interest %d%%  = %.5f\n",z+=5 ,interest[a]);
    }
    //baruuu
    int index = -1;
    for (int a = 0; a < option; a++)
    {
        if (npv[a] <= 0)
        {
            index = a;
            break;
        }
    }

    if (index == -1)
    {
        return -1; // IRR not found
    }
    double irr = rasio[index - 1] + ((npv[index - 1] / (npv[index - 1] - npv[index])) * (rasio[index] - rasio[index - 1]));
    alya(50,4);printf("IRR %d%%  = %.5f\n",irr);

//////////
    int k=0,u=0;
    for (int a = 0; a < option; a++)
    {
            bingkai(40,19, 15,13+k,2);

        alya(25,12+k);printf("===== PERHITUNGAN %d =====\n", a + 1);
        int g=17;
        for (int b = 0; b < bulan; b++)
        {
            alya(17,14+k);printf("  Bulan                    PV");
            alya(17,u+16+b);printf("Bulan %d                  %d\n", b + 1, (int)pv[a][b]);
            g++;
        }
       
        alya(35,g+u);printf("=======Total======\n");
        alya(40,g+1+u);printf("%d\n", (int)pvTotal[a]);
        alya(35,g+2+u);printf("==================\n\n");
        u+=20;
        k+=20;
    }

    getch();
}


