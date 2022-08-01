#include<stdio.h>
#include<math.h>

int main()
{
	int i,m,ind;
	int num[10];
	
	//PROGRAMA
	
	//LER OS VALORES DOS VETORES
	for (ind = 0; ind < 10; ind++)
	{
		printf("Escreva a numero que queira adicionar: ");
		scanf(" %d", &num[ind]);
	}
	
	
	//Valores m e i
	m = 1;
	for (ind = 0; ind < 10; ind++)	
	{
		
		if(num[ind] < num[ind+1] )
		{
			m++;
		}
		else
		{
			printf("O valor de m e de: %d\n", m);	
			printf("O valor de i e de: %d\n", ind+1-m);
			m = 1;
	
		}
	}
}
