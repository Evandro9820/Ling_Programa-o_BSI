#include <stdio.h>

int main (){
    float id, somaid,qtdp,md;
    somaid=qtdp=0;
    id=10;
    while(id>0){
      printf("\nDigite a Idade ou 0 para sair: ");
      scanf("%f",&id);
      if(id>0){ qtdp++;
                somaid+=id;
              }
    }
  if(qtdp!=0){
  md=somaid / qtdp;
  printf("\n\nMedia= %.2f", md);
  }
  else{
   printf("\nNenhuma Idade Válida digitada!");
  }
}