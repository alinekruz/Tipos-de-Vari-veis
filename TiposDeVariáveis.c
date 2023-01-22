#include <stdio.h>
#include <stdlib.h>


void main ()
{
printf("Seja Bem Vindo ao Curso de C");


//Neste primeiro código você irá conhecer os tipos de variáveis na linguagem C


//Declarando uma variável do tipo "inteiro" que é representado por "int" que "a" recebe(=) "10"

int a = 10;

//printf é uma declaração que fazemos para aparecer em tela, \n é para pularmos uma linha, %d chama um tipo inteiro
 printf("\nO valor da variavel inteira a = %d", a);
 scanf("%d");


 //Declarando uma variável do tipo "flutuante" que é representado por "float" em que "b "recebe(=) o número quebrado "5.5"
 //observe que %f chama o tipo flutuante

float b = 5.5;

printf("\nO valor da variavel flutuante e = %f", b);
scanf("%f", &b);


//Declarando uma variável do tipo "caracter" que é representado por "char" em que "c" recebe(=) uma letra "x"
 //observe que %c chama o tipo char

 char c = 'x';

 printf("\nO valor do tipo char e = %c", c);
 scanf("%c", c);

}
