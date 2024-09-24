#include <stdio.h>
#include <string.h>

int main(void) {
  char palavraSecreta[20];
  sprintf(palavraSecreta,"MANGA");

  int acertou = 0;
  int enforcou = 0;
  int numeroDeLetras = strlen(palavraSecreta);
  printf("Digite uma letra:");
  do{
    char chute;
    scanf("%c", &chute);
    for(int i = 0; i < numeroDeLetras; i++){
      if(palavraSecreta[i] == chute){
        printf("A posição %d tem essa letra\n", i);
      }
    }
  }while(!acertou && !enforcou);
  
  return 0;
}