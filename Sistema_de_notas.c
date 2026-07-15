#include<stdio.h>
#include<stdlib.h>


  int main(){
  
  
 float notas[5]; //Variaveis
 int i;
 float media;
 float soma = 0;
 int continuar = 1;

    while(continuar ==1){
        soma = 0;
        
        printf("\n==========SISTEMA DE NOTAS==========\n");
        
        
        
        for(i = 0; i < 5; i++){ //primeiro for para pedir as notas
        
        printf("Informe a nota %d:\n", i +1);
        scanf("%f", &notas[i]);
    }
    
     for(i = 0; i < 5; i++){ //segundo for para fazer a soma das notas
         soma += notas[i]; //soma das notas 
         }
         
                  printf("\n==========RESULTADOS==========\n");
                  
         for(i = 0; i < 5; i++){ //terceiro for para exibição das notas
         
          printf("Nota %d: %.1f\n", i + 1, notas[i]);
         }
         media = soma/5; //Divisão da media
         
         printf("\n==============================\n");
         printf("A média do aluno é %.1f\n", media);
         printf("==============================\n");
         
         if(media >= 7){ //condicionais para saber se o aluno foi aprovado ou não 
         printf("\nAluno aprovado\n");
         
         }else{
         printf("\nAluno reprovado\n");
         }
         
         printf("\nDeseja calcular outra media?\n");
         printf("1-Sim\n");
         printf("2-Não\n");
         printf("Escolha: ");
         printf("\n");
         scanf("%d", &continuar);
         }
         printf("\n==========Obrigado por utilizar o sistema!\n==========");
         
    return 0;
}
