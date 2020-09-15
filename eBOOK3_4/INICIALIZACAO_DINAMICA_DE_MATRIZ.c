#include <stdio.h>
	//variáveis GLOBAIS
	//vetor para receber as temperaturas digitadas
	float amostraTemperaturaTrimestra[3][4];
	void entradaTemperaturas()
	{
	  for (int indice1= 0; indice1 < 3; indice1++)
	  {
	    for(int indice2= 0; indice2 < 4; indice2++)
	    {
	      printf("\n Informe a temperatura #%d para o MES #%d: ", indice2 + 1, indice1 + 1);
	      scanf("%f", &amostraTemperaturaTrimestra[indice1][indice2]);
	    }
	  }
	}
	int main(void)
	{
	  entradaTemperaturas();
	  printf("\n Exemplo de acesso a Matriz Bidimensional");
	  printf("\n *------------------------------------------*");
	  for (int indice_i= 0; indice_i < 3; indice_i++)
	  {
	    printf("\n *--------Temperaturas do Mes : %d ----------*", indice_i + 1);
	    //laço repetição para solicitar 4 notas
	    for (int indice_j= 0; indice_j < 4; indice_j++)
	    {
	      printf("\n Temperatura %d = %.2f", indice_j + 1, amostraTemperaturaTrimestra[indice_i][indice_j]);
	    }
	  }
	  return 0;
    }


/*
INICIALIZAÇÃO DINAMICA DE MATRIZ
*/