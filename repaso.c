#include <stdio.h>

int main(void) {
  int multiplicador, multiplo;
  printf("Que tabla desea conocer\n");
  scanf("%d", &multiplicador);
  for (multiplo=1; multiplo<=10; multiplo++){
    printf(" %d * %d = %d \n", multiplicador, multiplo, multiplo*multiplicador);
  }
  return 0;
}
