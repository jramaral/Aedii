#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int V[MAX];
int menuOrdenacao();
int lerArquivo();


int main()
{
	int N;
	int i=0;
	N=lerArquivo();
	
	printf("\nO numero sao ");
	while(i<N)
	{
		printf("%d ",V[i]);
		i++;
	}
	
	
	
	return 0;
	
}/*  main */

int menuOrdenacao()
{

	char op;

	

	while(1)
    {
		
		printf("\tTRABALHO 2 - AED II\n\n\tORDENACAO\n1- LER ARQUIVO \n2- BUBBLE SORT\n3- SELECTION SORT \n4- INSERTION SORT \n5- MARGESORT \n6- QUICK \n7- SAIR\n\nOPCAO: ");
		scanf("%c", &op);

		switch(op)
        {
			case '1' : 
				break;
                
			case '2' : 
				
				break;
                
			case '3' : 			/*imprimir os dados CHAVE*/
				
				break;
                
			case '4' :			/*imprimir os dados NOME*/
				
				break;
			
			case '5':			/*imprimir os dados cpf*/
				
			    break;
			case '6':			/*Rmover*/
				
				
			    break;
            case '7':
				
				break;
			
                
			case '0' : 
               
               
                
            return 0;
		}
	}
}

int lerArquivo()
{
	int n=0, numero;
	FILE *arquivo; /* ponteiro para um arquivo */
	
	arquivo=fopen("./entrada.txt","r");
	
	if(arquivo==NULL) /* verifica se o arquivo pode ser aberto */
	{
		/* limpa a tela */
		system("clear");
		printf("\n\nArquivo entrada.txt nao pode ser aberto. Verifique.\n\n");
		
	}else{
		/* posiciona no inicio do arquivo */
		fseek(arquivo,0,SEEK_SET);
		while((n<MAX) && (!feof(arquivo)))
		{
			fscanf(arquivo,"%d", &numero);
			V[n++]=numero;
			
		} /* while */
		n--;
		printf("\nForam lidos %d numeros. ",n);
		fclose(arquivo);
		
	} /* if-else */

	return(n);
	
} /* lerArquivo */