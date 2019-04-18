#include <stdio.h>
int main(){
   double pi = 3.14159, raio, area;
   printf("Digite o valor do Raio: ");
   scanf("%f", &raio);
   area = pi * (raio * raio);
   printf("A=%.4f", area);
   return 0;
}
