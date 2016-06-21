main()
{
	int num, contador, divisor, resto, c, qtd_numeros_primos;
	int eh_primo = 0;
	 
	for (c = 1; c<=10; c++)
	{
		printf ("Digite: ");
		scanf ("%d", &num);
		eh_primo = 1;
		for (contador = 2; contador  < num; contador = contador + 1)
		{
			resto = num % contador;
			if (resto == 0){
				eh_primo = 0;
			}		
		}
		if (eh_primo == 1)
		{
			qtd_numeros_primos++;
		}
	}	
	printf("Quantidade: %d", qtd_numeros_primos);
}
