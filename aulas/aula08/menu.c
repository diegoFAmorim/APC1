#include <stdio.h>
#include <stdlib.h>
int main(){
  char opcao = 0;
  float saldo = 0.0f;
  
  while(opcao != '0'){
    int deu_certo = system("clear");
    printf("Menu de opções:\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer recarga\n");
    printf("3 - Listar recados\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    deu_certo = scanf( "%c", &opcao);
    while(getchar() != '\n');

    switch(opcao){ 
      case '1':
        deu_certo = system("clear");
        printf("Consultar saldo\n");
        printf("O saldo é R$%5.2f\n", saldo);
        break;
      case '2':{
        char valor = 0;
        while(valor != '0'){
        deu_certo = system("clear");
        printf("Fazer reacarga\n");
          printf("1 - R$ 10,00 \n");
          printf("2 - R$ 20,00 \n");
          printf("3 - R$ 50,00 \n");
          printf("0 - Retornar \n");
          printf("Escolha o valor da recarga:");
          deu_certo = scanf( "%c", &valor);
          while(getchar() != '\n');
          switch(valor){
            case '1': saldo = saldo + 10.0f; break;
            case '2': saldo = saldo + 20.0f; break;
            case '3': saldo = saldo + 50.0f; break;
            case '0': break;
            default: printf("Opção inválida!\n"); break;
          }

          if(valor == '1' || valor == '2' || valor == '3'){
            printf("Recarga realizada com sucesso!\n");
            printf("Pressione entar para continuar...");
            getchar();
        }
        }
      break;
      }
      case '3':
        deu_certo = system( "clear");
        printf("Listar recados\n");
        printf("Você não tem recados\n"); break;
      printf("Pressione enter pra continuar...");
      getchar();
      break;
      case '0': break;
      default: printf("Opção inválida\n"); break;
    }
    if (opcao != '0'){
      getchar();
    }
  }
    return 0;
  
}
