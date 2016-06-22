main()
{
	int codigo, opcao;
	float valor_investimento, total_com_rendimento, rendimento_mensal;
	
	do
	{
		printf("Digite o codigo cliente: ");
		scanf ("%d", &codigo);
		printf("\n\nEscolha uma opcao:\n");
		printf("  1: Poupanca\n");
		printf("  2: Poupanca Plus\n");
		printf("  3: Fundos de Renda Fixa\n");
		printf ("Opcao: ");
		scanf ("%d", &opcao);
		printf ("\n\n");
		
		printf("Digite o valor do investimento R$: ");
		scanf ("%f", &valor_investimento);
		
		switch (opcao)
		{
			case 1:
			{
				printf("Total Investido R$: %.2f\n", valor_investimento);
				total_com_rendimento = valor_investimento + (valor_investimento * 0.15);
				printf("Investimento mais rendimento mensal (1,5%%) R$: %.2f\n", total_com_rendimento);
				rendimento_mensal = total_com_rendimento - valor_investimento;
				printf("Total de rendimento mensal R$: %.2f\n", rendimento_mensal);
			}		
		}
	}while (codigo >= 0);
}
