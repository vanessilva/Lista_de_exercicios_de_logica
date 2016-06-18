/*
	Este programa foi desenvolvido para o trabalho prático da disciplina LDP
	Professor: Kleber Rezende
	1REDES - IFSULDEMINAS
	Autoras: Leticia Barbara Previ Azevedo e Vanessa Aparecida da Silva
	Data da última alteração: 06/06/2016
	
*/
main()
{
	//variáveis de convidados
	int qtd_beberroes, qtd_abstemios, total_convidados;
	//Variáveis quantidades
	int qtd_de_latas_cerveja, qtd_carne, qtd_linguicat, qtd_linguicaf, qtd_limao, qtd_tomate, qtd_cebola,
			qtd_vinagre, qtd_pao, qtd_detergente, qtd_esponja;
	//Variáveis de preços de bebidas
	float qtd_de_lt_refri_normal, qtd_refri_diet, qtd_carvao, qtd_sal, qtd_papelh;
	//Variáveis de preços de comidas
	float preco_cerveja, preco_refri, preco_refri_diet, preco_carne, preco_linguicat, preco_linguicaf,
			preco_limao, preco_tomate, preco_cebola, preco_vinagre, preco_pao, preco_carvao, preco_sal, preco_detergente,
			preco_esponja, preco_papelh, total_cerveja, total_refri, total_refri_diet, total_carne,
			total_linguicat, total_linguicaf, total_limao, total_tomate, total_cebola, total_vinagre, total_pao, 
			total_detergente, total_esponja, total_papelh, total_carvao, total_sal,
			total_churrasco, total_por_pessoa, total_por_beberrao, total_por_abstemio, desconto, total, total_com_acrescimo, acrescimo;
			
			
	printf ("------------Planejamento Churrasco!------------\n\n");
	int opcao;
	do
	{
		printf("\nEscolha uma opcao: \n");
		printf("  1: Cadastrar convidados\n");
		printf("  2: Cadastrar precos de produtos\n");
		printf("  3: Listar os precos cadastrados\n");
		printf("  4: Calcular o custo total\n");
		printf("  0: Sair\n");
		printf("Sua opcao: ");
		
		scanf("%d", &opcao);
		printf("\n\n");
		switch (opcao)
		{
			/* 
				====================
				Cadastrar convidados
				====================
			*/
			case 1:

				do
				{
				printf ("Quantidade de pessoas que bebem: ");
				scanf ("%d", &qtd_beberroes);
				if (qtd_beberroes < 0)
					{
						printf ("Valor INVALIDO! Digite novamente! \n");
					}
				}while (qtd_beberroes < 0);
				do
				{
					printf ("Quantidade de pessoas que nao bebem: ");
					scanf ("%d", &qtd_abstemios);
					if (qtd_abstemios < 0)
					{
						printf ("Valor INVALIDO! Digite novamente! \n");
					}	
				}while (qtd_abstemios <		 0);
				
				total_convidados = qtd_beberroes + qtd_abstemios;
	            printf ("Total de convidados: %d \n", total_convidados);
	
				break;
				
				
			/* 
				=============================
				Cadastrar precos dos produtos
				============================= 
			*/
			case 2:
				do
				{
					printf ("\nInforme o preco da cerveja (lata) R$: ");
					scanf ("%f", &preco_cerveja);
					if (preco_cerveja <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente! \n");
					}
				}while (preco_cerveja <= 0);
				do
				{
					printf ("Informe o preco do refri (litro) R$: ");
					scanf ("%f", &preco_refri);
					if (preco_refri <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente! \n");
					}
				}while (preco_refri <= 0);
				do 
				{
					printf ("Informe o preco do refri diet (litro) R$: ");
					scanf ("%f", &preco_refri_diet);
					if (preco_refri_diet <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				} while (preco_refri_diet <= 0);
				do
				{
					printf ("Informe o preco da carne de vaca (Kg) R$: ");
					scanf ("%f", &preco_carne);
					if (preco_carne <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_carne <= 0);
				do
				{
					printf ("Informe o preco da linguica toscana (Kg) R$: ");
					scanf ("%f", &preco_linguicat);
					if (preco_linguicat <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_linguicat <= 0);
				do
				{
					printf ("Informe o preco da linguica de frango (Kg) R$: ");
					scanf ("%f", &preco_linguicaf);
					if (preco_linguicaf <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_linguicaf <= 0);
				do
				{
					printf ("Informe o preco limao (Kg) R$: ");
					scanf ("%f", &preco_limao);
					if (preco_limao <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_limao <= 0);
				do
				{
					printf ("Informe o preco tomate (Kg) R$: ");
					scanf ("%f", &preco_tomate);
					if (preco_tomate <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_tomate <= 0);
				do
				{
					printf ("Informe o preco cebola (Kg) R$: ");
					scanf ("%f", &preco_cebola);
					if (preco_cebola <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_cebola <= 0);
				do
				{
					printf ("Informe o preco vinagre (Uni) R$: ");
					scanf ("%f", &preco_vinagre);
					if (preco_vinagre <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_vinagre <= 0);
				do
				{
					printf ("Informe o preco pao (Uni) R$: ");
					scanf ("%f", &preco_pao);
					if (preco_pao <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_pao <= 0);
				do
				{
					printf ("Informe o preco carvao (Uni) R$: ");
					scanf ("%f", &preco_carvao);
					if (preco_carvao <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_carvao <= 0);
				do
				{
					printf ("Informe o preco sal grosso (Kg) R$: ");
					scanf ("%f", &preco_sal);
					if (preco_sal <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_sal <= 0);
				do
				{
					printf ("Informe o preco detergente (Uni) R$: ");
					scanf ("%f", &preco_detergente);
					if (preco_detergente <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_detergente <= 0);
				do
				{
					printf ("Informe o preco esponja de pia (Uni) R$: ");
					scanf ("%f", &preco_esponja);
					if (preco_esponja <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_esponja <= 0);
				do
				{
					printf ("Informe o preco papel higienico (Uni) R$: ");
					scanf ("%f", &preco_papelh);
					if (preco_papelh <= 0)
					{
						printf ("Valor INVALIDO! Digite novamente!\n");
					}
				}while (preco_papelh <= 0);
				
				qtd_de_latas_cerveja = 6 * qtd_beberroes;
				qtd_de_lt_refri_normal = ceil( (0.300 * qtd_beberroes) + (1.000 * qtd_abstemios) );
				qtd_refri_diet = ceil (0.200 * total_convidados);
				qtd_carne = 250 * total_convidados;
				qtd_linguicat = 50 * total_convidados;
				qtd_linguicaf = 50 * total_convidados;
				qtd_limao = 50 * total_convidados;
				qtd_tomate = 50 * total_convidados;
				qtd_cebola = 10 * total_convidados;
				qtd_vinagre = 1;
				qtd_pao = 3 * total_convidados;
				qtd_carvao = ceil(0.05 * total_convidados);
				qtd_sal = ceil (0.02 * total_convidados);
				qtd_detergente = 1;
				qtd_esponja = 1;
				qtd_papelh = ceil (0.025 * total_convidados);
				
				total_cerveja = qtd_de_latas_cerveja * preco_cerveja;
				total_refri = (preco_refri) * qtd_de_lt_refri_normal;
				total_refri_diet = (preco_refri_diet) * qtd_refri_diet;
				total_carne = (preco_carne /1000) * qtd_carne;
				total_linguicat = (preco_linguicat /1000) * qtd_linguicat;
				total_linguicaf = (preco_linguicaf /1000) * qtd_linguicaf;
				total_limao = (preco_limao /1000) * qtd_limao;
				total_tomate = (preco_tomate /1000) * qtd_tomate;
				total_cebola = (preco_cebola /1000) * qtd_cebola;
				total_vinagre = preco_vinagre;
				total_pao = preco_pao * qtd_pao;
				total_carvao = (preco_carvao) * qtd_carvao;
				total_sal = (preco_sal) * qtd_sal;
				total_detergente = preco_detergente;
				total_esponja = preco_esponja;
				total_papelh = (preco_papelh) * qtd_papelh;
				
				
				break;
				
				
			/* 
				============================
				Listar os precos cadastrados
				============================ 
			*/
			case 3:
				printf ("\n\nPRODUTO\t\t\t QTD \t PRECO Uni \t PRECO Total ");
				printf ("\n Cerveja \t\t %d \t R$ %.2f \t R$ %.2f", qtd_de_latas_cerveja, preco_cerveja, total_cerveja);
				printf ("\n Refri \t\t\t %.2f \t R$ %.2f \t R$ %.2f", qtd_de_lt_refri_normal, preco_refri, total_refri);
				printf ("\n Refri diet \t\t %.2f \t R$ %.2f \t R$ %.2f", qtd_refri_diet, preco_refri_diet, total_refri_diet);
				printf ("\n Carne de Vaca \t\t %d \t R$ %.2f \t R$ %.2f", qtd_carne, preco_carne, total_carne);
				printf ("\n Linguica Toscana \t %d \t R$ %.2f \t R$ %.2f", qtd_linguicat, preco_linguicat, total_linguicat);
				printf ("\n Linguica Frango \t %d \t R$ %.2f \t R$ %.2f", qtd_linguicaf, preco_linguicaf, total_linguicaf);
				printf ("\n Limao \t\t\t %d \t R$ %.2f \t R$ %.2f", qtd_limao, preco_limao, total_limao);
				printf ("\n Tomate \t\t %d \t R$ %.2f \t R$ %.2f", qtd_tomate, preco_tomate, total_tomate);
				printf ("\n Cebola \t\t %d \t R$ %.2f \t R$ %.2f", qtd_cebola, preco_cebola, total_cebola);
				printf ("\n Vinagre \t\t %d \t R$ %.2f \t R$ %.2f", qtd_vinagre, preco_vinagre, total_vinagre);
				printf ("\n Pao \t\t\t %d \t R$ %.2f \t R$ %.2f", qtd_pao, preco_pao, total_pao);
				printf ("\n Carvao \t\t %.2f \t R$ %.2f \t R$ %.2f", qtd_carvao, preco_carvao, total_carvao);
				printf ("\n Sal \t\t\t %.2f \t R$ %.2f \t R$ %.2f", qtd_sal, preco_sal, total_sal);
				printf ("\n Detergente \t\t %d \t R$ %.2f \t R$ %.2f", qtd_detergente, preco_detergente, total_detergente);
				printf ("\n Esponja \t\t %d \t R$ %.2f \t R$ %.2f", qtd_esponja, preco_esponja, total_esponja);
				printf ("\n Papel Higienico \t %.2f \t R$ %.2f \t R$ %.2f \n\n", qtd_papelh, preco_papelh, total_papelh);
				
				
				break;
							
			/* 
				============================
				
				============================ 
			*/
			case 4:
				total_churrasco = total_cerveja + total_refri + total_refri_diet + total_carne + total_linguicat + 
									total_linguicaf + total_limao + total_tomate + total_cebola + 
									total_vinagre + total_pao + total_carvao + total_sal + total_detergente + 
									total_esponja + total_papelh;
				total_por_pessoa = total_churrasco / total_convidados;
				total_com_acrescimo = total_churrasco + (total_churrasco * 0.05);
				acrescimo = (total_com_acrescimo - total_churrasco) / total_convidados;
				
								
				       
				printf ("Total a pagar por pessoa \t\tR$: %.2f \n", total_por_pessoa);				
				printf ("Total do churrasco \t\t\tR$: %.2f \n", total_churrasco);				
				printf ("Acrescimo de 5%% de margem de erro.\n");
				printf ("Total do acrescimo por convidado (5%%)\tR$: %.2f \n", acrescimo);
				total_por_pessoa = total_com_acrescimo / total_convidados;
				total_por_abstemio = total_com_acrescimo / (1.333 * qtd_beberroes + qtd_abstemios);
				total_por_beberrao = 1.333 * total_por_abstemio;
				
				//total_por_beberrao = (total_com_acrescimo / total_convidados) + total_por_pessoa * 0.25;
				//total_por_pessoa / 2 - 25%
				//total_por_abstemio = (total_com_acrescimo / total_convidados) - total_por_pessoa * 0.25; 
				
				printf ("Total a pagar por pessoa com acrescimo \tR$: %.2f \n", total_por_pessoa);				
				printf ("Abstemios tem 25%% de desconto.\n");
				printf ("Total final a pagar para beberrao \tR$: %.2f\n", total_por_beberrao);
				printf ("Total final a pagar para abstemio \tR$: %.2f (25%% mais barato)\n", total_por_abstemio);
				printf ("Total bruto \t\t\t\tR$: %.2f \n", total_com_acrescimo);
	            
	            				
				break;
			case 0:
				break;
				
			default:
				printf("Opcao invalida!\n");
				break;
				
		}		
		
		
		
		
	} while (opcao != 0);
	
	
	printf("\nGerado pelo sistema de churrasco de Leticia e Vanessa S/A");
}
