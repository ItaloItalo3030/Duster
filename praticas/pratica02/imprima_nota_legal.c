#include <stdio.h>
int main() {
    printf("%s", "=====================================\n");
    printf("%s", "     N O T A    L E G A L\n");
    printf("%s", "=====================================\n");
    printf("%-15s\t%s\t%s\t%s\n", "Produto", "Qtd", "Valor", "Unit");
    printf("%-15s\t%03i\t%.2f\n", "Camiseta", 002, 39.99);
    printf("%-15s\t%03i\t%.2f\n", "Calca", 001, 89.90);
    printf("%-15s\t%03i\t%.2f\n", "Meia Social", 003, 19.99);
    printf("%s", "=====================================\n");
    printf("%s", "Total:                  229.85");

  return 0;
}