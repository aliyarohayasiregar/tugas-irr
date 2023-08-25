#include <stdio.h>
#include<conio.h>

void triangle(int n) {
    int i, j, k;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    triangle(n);
   getch();
}
