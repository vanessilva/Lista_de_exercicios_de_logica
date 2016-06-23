/*
Uma ag�ncia banc�ria possui v�rios clientes que podem fazer
investimentos com rendimentos mensais, conforme a tabela a seguir;
1 - poupan�a = rendimento 1,5%
2 - poupan�a plus = rendimento 2%
3 - fundos de baixa renda = rendimento 4%
Fa�a um programa que leia o c�digo do cliente, o tipo do investimento e 
o valor investido, e que calcule e mostre o rendimenro mensal de acordo
com o tipo de investimento. No final dever� mostrar o total investido
e o total de juros pagos.
A leitura terminar� quando o c�digo do cliente for menor ou igual a 0.
*/
main()
{
	int codigo, opcao;
	float valor_investimento, total_com_rendimento, rendimento_mensal;
	
	do
	{
		printf("Digite o codigo cliente: ");
		scanf ("%d", &codigo);
		if(codigo > 0)
		{
			printf("\n\nEscolha uma opcao:\n");
			printf("  1: Poupanca\n");
			printf("  2: Poupanca Plus\n");
			printf("  3: Fundos de Renda Fixa\n");
			printf ("Opcao: ");
			scanf ("%d", &opcao);
			printf ("\n\n");
			if (opcao == 1 || opcao == 2 || opcao == 3)
			{
			printf("Digite o valor do investimento R$: ");
			scanf ("%f", &valor_investimento);
			}
			switch (opcao)
			{
				case 1:
				
					printf("Total Investido em Poupanca R$: %.2f\n", valor_investimento);
					total_com_rendimento = valor_investimento + (valor_investimento * 0.15);
					printf("Investimento mais rendimento mensal (1,5%%) R$: %.2f\n", total_com_rendimento);
					rendimento_mensal = total_com_rendimento - valor_investimento;
					printf("Total de rendimento mensal R$: %.2f\n", rendimento_mensal);
				
				break;
				case 2:
				
					printf("Total Investido em Poupanca Plus R$: %.2f\n", valor_investimento);
					total_com_rendimento = valor_investimento + (valor_investimento * 0.20);
					printf("Investimento mais rendimento mensal (2%%) R$: %.2f\n", total_com_rendimento);
					rendimento_mensal = total_com_rendimento - valor_investimento;
					printf("Total de rendimento mensal R$: %.2f\n", rendimento_mensal);
				
				break;
				case 3:
				
					printf("Total Investido Fundos de Baixa Renda R$: %.2f\n", valor_investimento);
					total_com_rendimento = valor_investimento + (valor_investimento * 0.40);
					printf("Investimento mais rendimento mensal (4%%) R$: %.2f\n", total_com_rendimento);
					rendimento_mensal = total_com_rendimento - valor_investimento;
					printf("Total de rendimento mensal R$: %.2f\n", rendimento_mensal);
				
				break;
				default:
					printf("Opcao invalida!\n");	
			}
		}
		else
		{
			exit(0);
		}
	}while (opcao > 0);
}
