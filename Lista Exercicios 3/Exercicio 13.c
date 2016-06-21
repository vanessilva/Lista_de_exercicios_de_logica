main()
{
	int idade=0, contador=0, total_pessoas=0, contador_idade=0;
	float peso=0, total_peso10=0, pessoa_peso10=0, media=0,
	total_peso20=0, total_peso30=0, total_peso31=0, pessoa_peso20=0,
	pessoa_peso30=0, pessoa_peso31=0;
	
	for (contador = 1; contador <= 3; contador = contador + 1)
	{
		printf ("\nDigite a idade %d: ", contador);
		scanf ("%d", &idade);
		printf ("Digite a peso %d: ", contador);
		scanf ("%f", &peso);
		
		if(idade != 0)
		{
			total_pessoas++;
			contador_idade = total_pessoas + idade;
		}
		if (idade <= 10)
		{
			pessoa_peso10++;
			total_peso10 = total_peso10 + peso;
		}
		if (idade > 10 && idade <= 20)
		{
			pessoa_peso20++;
			total_peso20 = total_peso20 + peso;
		}
		if (idade > 20 && idade <= 30 )
		{
			pessoa_peso30++;
			total_peso30 = total_peso30 + peso;
		}
		if (idade > 30)
		{
			pessoa_peso31++;
			total_peso31 = total_peso31 + peso;
		}
	}
	if (pessoa_peso10 != 0)
	{
	media = total_peso10 / pessoa_peso10;
	printf ("\nmedia dos pesos das pessoas entre 1 a 10 anos: %.2f\n", media);
	}
	else
	{
		printf ("Nao ha pessoas na faixa de 1 a 10 anos!\n");
	}
	if (pessoa_peso20 != 0)
	{
	media = total_peso20 / pessoa_peso20;
	printf ("media dos pesos das pessoas entre 11 a 20 anos: %.2f\n", media);
	}
	else
	{
		printf ("Nao ha pessoas na faixa de 11 a 20 anos!\n");
	}
	if (pessoa_peso30 != 0)
	{
	media = total_peso30 / pessoa_peso30;
	printf ("media dos pesos das pessoas entre 21 a 30 anos: %.2f\n", media);
	}
	else
	{
		printf ("Nao ha pessoas na faixa de 11 a 20 anos!\n");
	}
	if (pessoa_peso31 != 0)
	{
	media = total_peso31 / pessoa_peso31;
	printf ("media dos pesos das pessoas com mais de 31 anos: %.2f\n", media);
	}
	else
	{
		printf ("Nao ha pessoas na faixa de 11 a 20 anos!\n");
	}
}
