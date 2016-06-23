main()
{
	int contador=0, total_sim=0, total_nao=0, total_mulheres_sim=0,
	total_sexo=0, total_opniao=0, total_homens=0, total_homens_nao=0;
	float porcentagem;
	char sexo, opniao;
	
	for (contador = 1; contador <= 10; contador++)
	{
		printf ("\nDigite o sexo %d: ", contador);
		//achei ajuda na net para "%c%*c"
		//http://stackoverflow.com/questions/9562218/c-multiple-scanfs-when-i-enter-in-a-value-for-one-scanf-it-skips-the-second-s
		scanf ("%c%*c", &sexo);
		printf ("Digite a opniao %d: ", contador);
		scanf ("%c%*c", &opniao);
		total_sexo++;
		total_opniao++;
		printf ("sexo %c\n", sexo);
		printf ("opiniao %c", opniao);
		
		if (opniao == 'S' || opniao == 's')
		{
			total_sim++;
		}
		if (opniao == 'N' || opniao == 'n')
		{
			total_nao++;
		}
		if ((sexo == 'F' || sexo == 'f') && (opniao == 'S' || opniao == 's'))
		{
			total_mulheres_sim++;
		}
		if (sexo == 'M' || sexo == 'm')
		{
			total_homens++;
		}
		if ((sexo == 'M' || sexo == 'm') && (opniao == 'N' || opniao == 'n'))
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

