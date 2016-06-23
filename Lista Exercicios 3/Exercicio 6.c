/*
Uma loja utiliza o código V para transação à vista e P para transação
a prazo. Faça um programa que receba o código
e o valor de 15 transações. Calcule e mostre:

o valor total das compras a vista; 
o valor total das compras a prazo; 
o valor total das compras efetuadas; 
o valor da primeira prestação das compras a prazo,
sabendo-se que essas serão pagas em três vezes.


*/
main()
{
	int contador;
	char tipo_compra;
	float total_vista, total_prazo, valor_compra, valor_1_prestacao, total_compras;
	for (contador = 1; contador <= 15; contador = contador + 1)
	{
		do
		{
			printf ("\nDigite V para compras a vista, P para compras a prazo (%d): ", contador);
			scanf ("%s", &tipo_compra);
		}while(tipo_compra != 'V' && 
				tipo_compra != 'v' && 
				tipo_compra != 'P' && 
				tipo_compra != 'p');

		
		if (tipo_compra == 'V' || tipo_compra =='v')
		{
			printf ("Digite valor de compra: ");
			scanf ("%f", &valor_compra);
			total_vista = total_vista + valor_compra;	
		}
		else
		{
			if (tipo_compra == 'P' || tipo_compra == 'p')
			{
				printf ("Digite valor de compra: ");
				scanf ("%f", &valor_compra);
				total_prazo = total_prazo + valor_compra;	
			}
		}
	}
	printf ("\nTotal a vista R$: %.2f\n", total_vista);
	printf ("Total a prazo R$: %.2f\n", total_prazo);
	total_compras = total_vista + total_prazo;
	printf ("Total de compras R$: %.2f\n", total_compras);
	valor_1_prestacao = total_prazo / 3;
	printf ("Valor da primeira prestacao de compras a prazo R$: %.2f", valor_1_prestacao);
	
	
	
}
