// Author:Carlos Alam Martínez Castillo
// Date:22/02/2015
// Version:entrado de texto

/*
  Homework DD
  this assignment ...
*/


#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <conio.h>


int main ( )
{
	char frase[50], res;
	int x=0 , a=0;
	
	std::cout<<"introduce la frase a encriptar:";
	gets (frase);
	
	while (frase[x] !='\0' && frase [x]>=0)//primero tenemos que decir que x es como nulo y despues que x es mas grande o igual a 0
	{
		x++;
	}
	std::cout<<"\n"<<x; 
	for(x=x-1;x>=0;x--)
	{
		frase [x]=frase[x]-27+230;
		std::cout<<" "<<frase[x];
	}
	

	
	getch( );
	return 0;
}
	
	
