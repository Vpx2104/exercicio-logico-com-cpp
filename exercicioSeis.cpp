#include <stdio.h>

int main() {
    int ano, is_bissexto;
    printf("digite o ano: ");
    scanf("%d", &ano); 
    is_bissexto = (ano % 4 == 0 && ano % 100 !=0) || (ano % 400 == 0);
    printf("%d\n", is_bissexto);
    return 0;
}