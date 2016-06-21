main()
{
	int idade, contador, acumulador_idades;
	float media;
	do
	{
		printf ("Digite a idade: ");
		scanf ("%d", &idade);
		if (idade != 0)
		{
		contador++;
		acumulador_idades = acumulador_idades + idade;
		}
		
	}while (idade > 0);	
	media = acumulador_idades / contador;
	printf("Media: %.2f", media);
}
