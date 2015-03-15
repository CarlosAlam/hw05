// Author:Martínez Castillo Carlos Alam
// Date:22/02/15
// Version:1.0


//Carlos Alam Martínez Castillo
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
	
	
