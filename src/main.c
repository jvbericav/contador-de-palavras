/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;
  int spc, count, jafoi, number;
  c = 1;
  count = 0; spc = 0; jafoi = 0; number = 0;

  while (c != '\n') {
      scanf("%c", &c);
      //verifica numeros com pontuação
      if ((c == ',' || c == '.') && number){
          if (jafoi){
              count ++;
              spc = 0;
          }else{
              spc = 1;
              jafoi = 1;
          }
      // verifica final de palavra
      } else if (c == ' ' || c == ',' || c == '.' || c == '-'|| c == '!'){
          if(spc)
              count ++;
          spc = 0;
          jafoi = 0;
      // verifica se tem palavra ou espaço antes do \n
      } else if(c == '\n' && spc){
          count ++;
      // casos de letras ou números
      } else {
        spc = 1;
	if(c=='0' || c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9')
	    number =1;
        else
            number = 0; 
      } 
  } 
  
  printf("%d\n", count);

  return 0;
}
