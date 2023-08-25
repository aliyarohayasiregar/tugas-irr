#include <stdio.h>
#include<conio.h>

int fpb(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int bilanganKPK(int a, int b) {
    return (a * b) / fpb(a, b);
}

int main() {
    int x = 5;
    int y = 8;
    int kpk = bilanganKPK(x, y);
    
    printf("Bilangan KPK dari %d dan %d adalah: %d\n", x, y, kpk);

    getch();
}
