/*
faça um programa que receba dez números inteiros e mostre
a quantidade de números primos dentre os números que foram digitados.
*/
main()
{
	int numero, contador, divisor, resto, cont, qtd_numeros_primos;
	int eh_primo = 0;
	 
	for (cont = 1; cont<=10; cont++)
	{
		printf ("Digite numero inteiro: ");
		scanf ("%d", &numero);
		eh_primo = 1;
		for (contador = 2; contador  < numero; contador = contador + 1)
		{
			resto = numero % contador;
			if (resto == 0)
			{
				eh_primo = 0;
			}
		}
		if (eh_primo == 1 && numero != 1)
		{
			qtd_numeros_primos++;
		}
	}	
	printf("Quantidade de numeros primos: %d", qtd_numeros_primos);
}
