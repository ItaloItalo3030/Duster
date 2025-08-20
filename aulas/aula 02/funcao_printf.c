#include <stdio.h>
#include <locale.h> // biblioteca de idiomas
int main() {
    setlocale(LC_ALL, ""); // usa o idioma portugues
    printf("-------------\n\n");
    printf("Olá, bom dia!\n\n");
    printf("-------------\n\n");

    printf("------------------------\n");
    printf(" N O T A  L E G A L\n");
    printf("------------------------\n");
    printf("Caderno      1  R$ 10.00\n");
    printf("Lápis        2  R$  5.00\n");
    printf("Borracha     1  R$  7.50\n");
    printf("------------------------\n");
    printf("Total........:  R$ 22.50\n");

    //  especificador de formato
    // %c - imprime um caracter
    // %s - imprime um texto(string)
    // %i - imprime um inteiro
    // %f - imprime um fracionario (float)
    printf("\nCaderno      1  10.00\n");
    printf("%-15s %03i %6.2f\n", "Caderno", 1, 100.0 );
    printf("%-15s %03i %6.2f\n", "Lápis", 2, 5.0 );



    return 0;
}