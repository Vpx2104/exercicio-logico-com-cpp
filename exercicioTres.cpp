#include <istream> 

int main(){
    

float a, b, c;

printf("digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);   
    printf("digite o terceiro numero: ");
    scanf("%f", &c);
    printf("a media dos numeros e: %.2f\n", (a + b + c) / 3);
     return 0;
}  