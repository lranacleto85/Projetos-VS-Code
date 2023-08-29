#include <stdio.h>

int main(void)
{
    int n;
    do{

        n = get_int("Insira altura da piramide ");
    }
    while (n < 1 || n > 8);

    for(int a = 0; a < n; a++){
        for(int b = n - a; b > 1; b--)
        printf(" ");
        for(int c = 0; c <= a; c++)
        printf("#");
        printf("\n");


        }
}