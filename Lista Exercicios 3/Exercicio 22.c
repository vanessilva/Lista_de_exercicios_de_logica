/*
Elabore um programa que receba a idade e a altura de várias pessoas,
calcule e mostre a média das alturas daquelas com mais de 50 anos.
Para encerrar a entrada de dados, digite idade menor ou igual a zero.
*/
main()
{
	int idade=0, altura_50, total_pessoas=0;
	float altura=0, contador_altura=0, media=0, total_altura=0;
	
	do
	{
		printf ("Digite a idade: ");
		scanf ("%d", &idade);
		printf ("Digite a altura: ");
		scanf ("%f", &altura);
		
		if (idade != 0)
		{
		total_pessoas++;
		}
		
		if (idade > 50)
		{
		altura_50++;
		total_altura = total_altura + altura;
		}
	}while(idade > 0 && altura > 0);
	
	media = total_altura / altura_50;
	printf ("media: %.2f", media);
	printf ("\ntotal pessoas: %d", total_pessoas);
}

