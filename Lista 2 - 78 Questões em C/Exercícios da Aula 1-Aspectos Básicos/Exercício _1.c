#include <stdio.h>>

int main(){
  int segundos, horas, minutos;

  printf("Informe o números de segundos\n");
  scanf("%d",&segundos);

  printf("%d segundos", segundos);

  horas=segundos/36000;
  segundos = segundos % 3600
  minutos = segundos / 60;
  segundos = segundos % 60; 

  printf("\nEquivalem a %d horas %d minutos %d segundos\n",horas,minutos, segundos);
  return 0;
}