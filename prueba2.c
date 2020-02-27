#include <stdio.h>
int main(void) {
int altura;
int base;
int numero;
printf("\n Ingrese un numero\n");
fflush(stdin);
scanf("%i", &numero);
for(base=1; base<=numero; base++ ){
for (altura=1; altura<=numero; altura++){
if(altura<=base)
printf("*");
else 
printf(" ");
}
printf("\n");
}
return 0;
}