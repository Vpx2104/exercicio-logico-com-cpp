#include<iostream> 

int  main() {
  float a,b,h;

    printf("digite o primeiro numero: ");
    scanf("%f", &b);

    printf("digite o segundo numero: ");
    scanf("%f", &h);

    a = (b*h) / 2;
    printf("a area do triangulo é: %.2f\n", a);
    return 0;
}