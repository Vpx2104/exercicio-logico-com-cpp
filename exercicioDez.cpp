#include <stdio.h>

int main() {
    float a1, b1, c1, a2, b2, c2, media_ponderada;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &a1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &a2);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &b1);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &b2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &c1);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &c2);
    
    media_ponderada = (a1 * a1 + b1 * b2 + c1 * c2) / (a2 + b2 + c2);
    
    printf("A media ponderada e: %.2f\n", media_ponderada);
    
    return 0;
}