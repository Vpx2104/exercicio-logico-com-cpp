#include<iostream> 

int main() {
    int a;
    int b = 5;
    int c = 3;
    printf("digite o numero");
    scanf("%d", &a);

    int divisao = a /b /c;
    int resto = a % b % c;
    printf("divisao: %d * %d * %d = %d\n (quociente), resto: %d\n",a, b, c, divisao, resto);

    return 0;
}