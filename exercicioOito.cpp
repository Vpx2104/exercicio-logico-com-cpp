#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Digite o primeiro lado: ");
    scanf("%d", &a);
    
    printf("Digite o segundo lado: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro lado: ");
    scanf("%d", &c);
    
    printf("%d\n", (a + b > c) && (a + c > b) && (b + c > a));
    
    return 0;
}