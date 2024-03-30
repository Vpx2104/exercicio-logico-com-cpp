#include <iostream> 

int main() {

int a;

   printf("Digite o numero: ");
    scanf("%d", &a);
    printf("%d\n", (a > 0) && ( a % 2 == 0) );


    return 0;
}