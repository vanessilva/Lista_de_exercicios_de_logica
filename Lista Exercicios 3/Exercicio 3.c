main()
{
	int contador, idade, faixa_etaria_1=0, 
	faixa_etaria_2=0, faixa_etaria_3=0,
	faixa_etaria_4=0, faixa_etaria_5=0;
	float porcentagem_fe1, porcentagem_fe5;

	for (contador = 0; contador < 15; contador = contador + 1)
	{
		printf ("Digite a idade %d: ", contador+ 1);
		scanf ("%d", &idade);
		if (idade <= 15)
		{
			faixa_etaria_1++;
		}
		else
		{
			if (idade <= 30)
			{
				faixa_etaria_2++;
			}
			else
			{
				if (idade <= 45)
				{
					faixa_etaria_3++;
				}
				else
				{
					if (idade <= 60)
					{
						faixa_etaria_4++;
					}
					else
					{
						faixa_etaria_5++;
					}
				}				
			}
		}
	}
		
	porcentagem_fe1 = (100 * faixa_etaria_1 ) / 15;
	porcentagem_fe5 = (100 * faixa_etaria_5 ) / 15;
	
	printf ("\nFaixa Etaria 1: %d (%.2f%%)\n", faixa_etaria_1, porcentagem_fe1);
	printf ("Faixa Etaria 2: %d\n", faixa_etaria_2);
	printf ("Faixa Etaria 3: %d\n", faixa_etaria_3);
	printf ("Faixa Etaria 4: %d\n", faixa_etaria_4);
	printf ("Faixa Etaria 5: %d(%.2f%%)", faixa_etaria_5, porcentagem_fe5);	
}
