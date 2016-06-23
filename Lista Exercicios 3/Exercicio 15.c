/*
Uma empresa fez uma pesquisa para saber se as pessoas gostaram
ou não de um novo produto lançado no mercado.
Para isso forneceu: o sexo do entrevistado e sua resposta(S - sim ou N - não).
Sabe-se que foram entrevistadas dez pessoas. Faça um programa
que calcule e mostre:
O número de pessoas que responderam sim;
O número de pessoas que responderam não;
O número de mulheres que responderam sim;
A porcentage, de homens que responderam não,
entre os homens analisados.
*/
main()
{
	int contador=0, total_sim=0, total_nao=0, total_mulheres_sim=0,
	total_sexo=0, total_opiniao=0, total_homens=0, total_homens_nao=0;
	float porcentagem;
	char sexo, opiniao;
	
	for (contador = 1; contador <= 10; contador++)
	{
		printf ("\nDigite o sexo %d: ", contador);
		//achei ajuda na net para "%c%*c"
		//http://stackoverflow.com/questions/9562218/c-multiple-scanfs-when-i-enter-in-a-value-for-one-scanf-it-skips-the-second-s
		scanf ("%c%*c", &sexo);
		printf ("Digite a opiniao %d: ", contador);
		scanf ("%c%*c", &opiniao);
		total_sexo++;
		total_opiniao++;
		printf ("sexo %c\n", sexo);
		printf ("opiniao %c", opiniao);
		
		if (opiniao == 'S' || opiniao == 's')
		{
			total_sim++;
		}
		if (opiniao == 'N' || opiniao == 'n')
		{
			total_nao++;
		}
		if ((sexo == 'F' || sexo == 'f') && (opiniao == 'S' || opiniao == 's'))
		{
			total_mulheres_sim++;
		}
		if (sexo == 'M' || sexo == 'm')
		{
			total_homens++;
		}
		if ((sexo == 'M' || sexo == 'm') && (opiniao == 'N' || opiniao == 'n'))
		{
			total_homens_nao++;
		}		
	}
	printf ("\nTotal que responderam sim: %d\n", total_sim);
	printf ("Total que responderam nao: %d\n", total_nao);
	printf ("Total de mulheres que responderam sim: %d\n", total_mulheres_sim);
	/*
	 total_homens    100%
	 total_homens_nao  x
	 total_homens * x = (total_homens_nao * 100)
	 x = (total_homens_nao * 100) / total_homens
	*/
	porcentagem = (total_homens_nao * 100) / total_homens;
	printf ("Porcentagem de homens que responderam nao: %.1f%%", porcentagem);
}

