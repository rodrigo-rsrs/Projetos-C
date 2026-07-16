#include <stdio.h>

    void menu(){

        printf("================================\n");
        printf("CALCULADORA\n");
        printf("================================\n");

        printf("ESCOLHA UMA OPCAO:\n");

        printf("1 - Soma\n");
        printf("2 - Multiplicacao\n");
        printf("3 - Subtracao\n");
        printf("4 - Divisao\n");
    }

        float soma(float n1, float n2){
            return n1 + n2;
    }

    float multiplicacao(float n1, float n2){
        return n1 * n2;
    }

    float subtracao(float n1, float n2){
        return n1 - n2;
    }

    float divisao(float n1, float n2){
        return n1 / n2;
    }


    int main(){
        float resultado;
        int opcao;
        float n1,n2;
        int continuar = 1;

            while(continuar == 1){

            

        menu();
        printf("Escolha uma opcao:\n");
        scanf("%d", &opcao);

        printf("Digite o primeiro numero:\n");
        scanf("%f", &n1);

        printf("Digite o segundo numero:\n");
        scanf("%f", &n2);

    switch(opcao){
        case 1:
        resultado = soma(n1,n2);
        printf("O resultado e: %.2f\n", resultado);
            break;

            case 2:
            resultado = multiplicacao(n1, n2);
            printf("O resultado e: %.2f\n", resultado);
                break;

          case 3:
          resultado = subtracao(n1, n2);  
          printf("O resultado e: %.2f\n", resultado);
            break;

        case 4:

        if(n2 == 0){
            printf("FALHA: IMPOSSIVEL DIVIDIR POR 0\n");
        
        }else{
            resultado = divisao(n1, n2);
        printf("O resultado e: %.2f\n", resultado);
        }
            break;    

        default:
        printf("Opcao invalida\n");
    }
     
        
        printf("DESEJA CONTINUAR?\n");
        printf("ESCOLHA:\n");
        printf("1 - SIM.\n");
        printf("2 - NÂO.\n");
        scanf("%d", &continuar);
            }
            
            printf("OBRIGADO POR ULTILIZAR A CALCULADORA!\n");
        


        return 0;

    }
