/*
Faça um programa em linguagem C que receba a idade,
a altura e o peso de 25 pessoas, calcule e mostre:
A quantidade de pessoas com idade superior a 50 anos;
A média das alturas das pessoas com idade entre 10 e 20 anos;
A porcentagem de pessoas com peso inferior a 40 quilos
entre todas as pessoas analisadas.
*/
main()
{
	int idade, contador, terceira_idade=0, qtd_10_20=0,
	qtd_peso_menor_40=0;
	float altura, peso, qtd_altura_10_20=0, media_altura_10_20,
	porcentagem_peso_menor_40=0;
	int total_pessoas = 25;
	for (contador = 1; contador <= total_pessoas; contador = contador + 1)
	{
		printf ("\nDigite a idade (%d): ", contador);
		scanf ("%d", &idade);
		printf ("Digite a altura (%d): ", contador);
		scanf ("%f", &altura);
		printf ("Digite o peso (%d): ", contador);
		scanf ("%f", &peso);
		
		if (idade > 50)
		{
			terceira_idade++;
		}
		else
		{
			if (idade >= 10 && idade <= 20)
			{
				qtd_10_20++;
				qtd_altura_10_20 = qtd_altura_10_20 + altura;
			}
		}
		
		if (peso < 40.0)
		{
			qtd_peso_menor_40++;
		}			
	}
	printf ("\nA quantidade de pessoas na terceira idade: %d", terceira_idade);
	if (qtd_10_20 == 0)
	{
		printf ("\nNao existem pessoas na faixa de 10 e 20 anos!");
	}
	else
	{
	media_altura_10_20 = qtd_altura_10_20 / qtd_10_20;
	printf ("\nA media das alturas das pessoas entre 10 e 20 anos e: %.2fm\n", media_altura_10_20);
	}
	porcentagem_peso_menor_40 = (100 * qtd_peso_menor_40 ) / total_pessoas;
	printf ("Porcentagem de pessoas abaixo dos 40Kg: %.2f%%", porcentagem_peso_menor_40);
}

