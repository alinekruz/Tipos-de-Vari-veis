#include <stdio.h>
#include <stdlib.h>


void main ()
{
printf("Seja Bem Vindo ao Curso de C");


//Neste primeiro c�digo voc� ir� conhecer os tipos de vari�veis na linguagem C


//Declarando uma vari�vel do tipo "inteiro" que � representado por "int" que "a" recebe(=) "10"

int a = 10;

//printf � uma declara��o que fazemos para aparecer em tela, \n � para pularmos uma linha, %d chama um tipo inteiro
 printf("\nO valor da variavel inteira a = %d", a);
 scanf("%d");


 //Declarando uma vari�vel do tipo "flutuante" que � representado por "float" em que "b "recebe(=) o n�mero quebrado "5.5"
 //observe que %f chama o tipo flutuante

float b = 5.5;

printf("\nO valor da variavel flutuante e = %f", b);
scanf("%f", &b);


//Declarando uma vari�vel do tipo "caracter" que � representado por "char" em que "c" recebe(=) uma letra "x"
 //observe que %c chama o tipo char

 char c = 'x';

 printf("\nO valor do tipo char e = %c", c);
 scanf("%c", c);

}
