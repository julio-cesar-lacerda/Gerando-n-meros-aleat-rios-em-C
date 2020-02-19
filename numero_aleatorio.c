#include <stdio.h>

int main()
{
	int i,numero;

	printf("Gerando 10 valores aleatorio: ");

	for(i = 0;i < 10;++i)
	{
		printf(" %d ",rand()%100); //QUANDO VOCẼ USA ESSA FUNÇAO,ELA GERA NÚMERO ALEATÓRIO,MAS NÃO ALTERA O VALOR NA COMPILAÇÃO.
	}
    
    printf("\nGerando 10 valores aleatorio: ");

    srand(time(NULL));//QUANDO VOCẼ USA ESSA FUNÇAO,ELA GERA NÚMERO ALEATÓRIO AO LONGO DO TEMPO NA COMPILAÇÃO.

	for(i = 0;i < 1;++i)
	{
		printf(" %d ",rand()%4); //SÓ FUNÇÃO NÃO SUFICIENTE PARA GERA NUMERO ALEATÓRIA PARA VALOR SEJÁ ALTERA VOCẼ TEM  USA FUNÇÃO SRANDA COM COMPEMENTO A FUNÇÃO.
	}

	printf("\n\n\n");
	return 0;
}
