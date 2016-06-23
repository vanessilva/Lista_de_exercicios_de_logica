/*
Faça um programa que apresente o menu de opções a seguir, que
permita ao usuário escolher a opção desejada, receba os dados
necessários para executar a operação e mostre o resultado.
Verifique a possibilidade de opção inválida e não se preocupe
com restrições como salário inválido.
menu de opções:
1 - Novo salário (ate 210 = 15%, até 600 = 10% e acima de 600 = 5%)
2 - Férias (calcular férias de acordo com o salário)
3 - Décimo terceiro (calcular décimo terceiro)
4 - Sair (sair do programa)
digite a opção desejada

*/
main()
{
	int opcao, qtd_meses;
	float salario, novo_salario, ferias, decimo_terceiro;
	
	do
	{
		printf("\n\nEscolha uma opcao:\n");
		printf("  1: Novo Salario\n");
		printf("  2: Ferias\n");
		printf("  3: Decimo Terceiro\n");
		printf("  4: Sair\n");
		printf ("Opcao: ");
		scanf ("%d", &opcao);
		printf ("\n\n");
		
		switch (opcao)
		{
			case 1:
			{
				printf ("Digite seu salario R$: ");
				scanf ("%f", &salario);
				if (salario <= 210.00)
				{
					novo_salario = salario + (salario * 0.15);
					printf ("Novo Salario R$: %.2f", novo_salario);
				}
				if (salario > 210.00 && salario <= 600.00)
				{
					novo_salario = salario + (salario * 0.10);
					printf ("Novo Salario R$: %.2f", novo_salario);
				}
				if (salario > 600.00)
				{
					novo_salario = salario + (salario * 0.05);
					printf ("Novo Salario R$: %.2f", novo_salario);
			}
			break;
			case 2:
				{
					printf ("Digite seu salario R$: ");
					scanf ("%f", &salario);
					ferias = salario + (salario/3);
					printf ("Ferias R$: %.2f", ferias);
				}
			break;
			case 3:
			{
				printf ("Digite seu salario R$: ");
				scanf ("%f", &salario);
				printf ("Digite a quantidade de meses de trabalho: ");
				scanf ("%d", &qtd_meses);
				decimo_terceiro = (salario * qtd_meses) / 12;
				printf ("Decimo Terceiro R$: %.2f", decimo_terceiro);
			}
			case 4:
			{
				exit(0);
			}
			default:
				printf("Opcao invalida!\n");
				break;	
			}
		}
	}while (opcao != 4);
}
