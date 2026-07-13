#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
int numeroSecreto;
int palpites = 0;
int tentativas = 0;
    
    
    printf("\n========JOGO DE ADIVINHAÇÃO========\n");
    printf("\nTente acertar um numero entre 1 e 100\n");
    
    srand(time(NULL));
        
  numeroSecreto = rand()%100+1;
    
    while(palpites != numeroSecreto){
        printf("\nInforme o seu palpite\n");
        scanf("%d", &palpites);
            tentativas++;
        
        if(palpites == numeroSecreto){
            printf("Voce acertou em %d tentativas\n", tentativas);
            
        }else if(palpites > numeroSecreto){
            printf("O numero secreto é menor\n");
            
        }else{
            printf("O numero secreto é maior\n");
        }
        
    }
    
    return 0;
    }
