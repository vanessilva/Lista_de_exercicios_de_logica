/*
Faça um algoritmo que receba 10 idades, pesos e alturas,
calcule e mostre: 
•	A média das idades das 10 pessoas; 
•	A quantidade de pessoas com peso superior a 90 quilos
e altura inferior a 1.50; 
•	A porcentagem de pessoas com idade entre 10 e 30 anos
entre as pessoas que medem mais de 1.90.
*/
main()
{
	int total_pessoas = 10, contador, idade, total_idades=0,
	qtd_peso90=0, qtd_altura150=0, qtd_peso90_altura150=0,
	total_idade10_30_altura190=0;
	float altura, peso, media_das_idades, porcentagem;
	for (contador = 1; contador <= total_pessoas; contador = contador + 1)
	{
		printf ("\nDigite a idade (%d): ", contador);
		scanf ("%d", &idade);
		printf ("Digite o peso (%d): ", contador);
		scanf ("%f", &peso);
		printf ("Digite a altura (%d): ", contador);
		scanf ("%f", &altura);
		
		total_idades = total_idades + idade;
		
		if (peso > 90.0 && altura < 1.50)
		{
			printf("Achei um gordinho!\n");
			qtd_peso90_altura150 = qtd_peso90_altura150 + 1;
		}
		if (idade >= 10 && idade <= 30 && altura > 1.90)
		{
			total_idade10_30_altura190++;
		}
	}
	media_das_idades = total_idades / total_pessoas;
	printf ("\nMedia entre as idades: %.2f\n", media_das_idades);
	printf ("Quantidade de pessoas com mais de 90Kg e 1.50m de altura: %d\n", qtd_peso90_altura150);
	porcentagem = (100 * total_idade10_30_altura190) / total_pessoas;
	printf ("Porcentagem idade entre 10 e 30 e mais de 1.90m de altura: %.2f", porcentagem);
}
