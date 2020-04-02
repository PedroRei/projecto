#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main(){
  /*NOTAS: 
          O argc e o numero de argumentos passados na linha de comandos
          O argv e o vetor onde estao guardados esses argumentos*/

  char teste;

  scanf("%c", &teste);
  printf("%c\n", teste);



  if(1==1) {

    printf("if");

    switch(teste) {


      
      /* adiciona um novo produto ao sistema */
    case 'a':{
      printf("Chegou ao teu cu e entrou\n");
    


      break;
    }

      /* adiciona stock a um produto existente no sistema */
    case 'q': {

      break;
    }

      /* cria uma nova encomenda */
    case 'N': {

      break;
    }

     /* adiciona um produto a uma encomenda */
    case 'A':{

      break;
    }

      /* remove stock a um produto existente */
    case 'r': {

      break;
    }

    /* remove um produto de uma encomenda */
    case 'R': {

      break;
    }

     /* calcula o custo de uma encomenda */
    case 'C':{

      break;
    }

      /* altera o preço de um produto existente no sistema */
    case 'p': {

      break;
    }

      /* retorna a descrição e a quantidade de um produto numa dada encomenda */
    case 'E': {

      break;
    }

    /* retorna o identificador da encomenda em que um dado produto ocorre mais vezes */
    case 'm':{

      break;
    }

      /* lista todos os produtos existentes no sistema por ordem crescente de preço */
    case 'l': {

      break;
    }

      /* lista todos os produtos de uma encomenda por ordem alfabética da descrição */
    case 'L': {

      break;
    }

     /* termina o programa */
    case 'x': {

      return 0;
    }
    } 
  }
  return 0;
}