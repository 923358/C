#include <stdio.h>
#include <stdlib.h>
/*
Esse programa escreve no ecrã todos os números impares
entre 1 e 30 no ecrã
*/
int main(){ 

 int i;

  for( i = 1 ; i <= 30 ; i++ )
  {
    if(i%2==0)
        continue;
    else printf("%d ",i);

  }
  return 0;
}
