
/*

	Name: Proyecto Final "Cifrado Cesar"
	Copyright: Todos los derechos reservados (c)
	Author: Barrios Ramirez Luis Fernando
	Date: 17/10/19 20:15
	Description:  Al cifrar la cadena dada por el usuario, se suma 3 al valor ASCII de los caracteres.
	Del mismo modo, para descifrar la cadena, se resta 3 del valor ASCII de los caracteres para
	imprimir la cadena original (texto plano).
	Entradas:
	eContador. De tipo entero, para recorrer cada uno de los caracteres de la cadena de texto dada.
	eSele: De tipo entero, para almacenar la opciòn del menú.
	cTexto[100]: De tipo char, es el texto plano dado por el usuario, es el mensaje a cifrar.
	bandera = 1: De tipo entero, sirve para entrar y salir del ciclo While.


*/


#include <stdio.h>

int main()
{
   int eContador;
   int eSele;
   char cTexto[100];
   int bandera = 1;
   
	printf("\nEscribe el texto para cifrar\t");
  	gets(cTexto);
   
   do{
   
   	printf("\n Elige una de las siguientes opciones...\n");
   	printf(" 1 = Cifrar el texto\n");
  	printf(" 2 =  Descifrar el texto\n");
  	printf(" 3 = Salir del programa\n");
  	scanf("%d", &eSele);
   	switch(eSele){
   	
   case 1:
      for(eContador = 0; (eContador < 100 && cTexto[eContador] != '\0'); eContador++)
        cTexto[eContador] = cTexto[eContador] + 3; //La llave de cifrado es 3, que se es sumada al valor ASCII 

      printf("\n El texto Cifrado es: %s\n", cTexto);
      break;

   case 2:
      for(eContador = 0; (eContador < 100 && cTexto[eContador] != '\0'); eContador++)
        cTexto[eContador] = cTexto[eContador] - 3; //La llave de cifrado es 3, que se es restada al valor ASCII 

      printf("\n Texto  Descifrar: %s\n", cTexto);
      
      break;
    case 3:
        	bandera = 0;
        	
        break;
   default:
      printf("\n No es una de las opciones [1,2,3]\n");    
   }  
   	
   }while(bandera == 1);
   
}

