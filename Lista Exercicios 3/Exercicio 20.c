main()
{
	int opcao;
	float nota1, nota2, nota3, media_a, media_p,
	peso1, peso2, peso3;

	do
	{
		printf("Escolha uma opcao:\n");
		printf("  1: Media aritmetica\n");
		printf("  2: Media ponderada\n");
		printf("  3: Sair\n");
		
		scanf("%d", &opcao);
		printf("\n\n");
				
		switch (opcao)
		{
			case 1:
			{
				printf ("digite nota 1: ");
				scanf ("%f", &nota1);
				printf ("digite nota 2: ");
				scanf ("%f", &nota2);
				media_a = (nota1 + nota2) / 2;
				printf ("Media aritmetica: %.2f\n\n", media_a);
			}
			break;
			
			case 2:
			{
				printf ("digite nota 1: ");
				scanf ("%f", &nota1);
				printf ("digite nota 2: ");
				scanf ("%f", &nota2);
				printf ("digite nota 3: ");
				scanf ("%f", &nota3);
				printf ("digite peso 1: ");
				scanf ("%f", &peso1);
				printf ("digite peso 2: ");
				scanf ("%f", &peso2);
				printf ("digite peso 3: ");
				scanf ("%f", &peso3);
				media_p = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
				printf ("Media ponderada: %.2f\n\n", media_p);
			}
			default:
				printf("Opcao invalida!\n");
				break;
		}
	}while (opcao != 3);
}
