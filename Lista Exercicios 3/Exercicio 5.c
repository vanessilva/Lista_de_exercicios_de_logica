//Faça um programa que mostre as tabuadas dos números de 1 a 10.

main()
{
	int numero, resultado, contador;
	
	printf ("Tabuada de 1 a 10: ");
	
	for (numero = 1; numero <= 10; numero = numero + 1)
	{
		printf ("\n");

		for (contador = 0; contador <= 10; contador = contador + 1)
		{
	    	resultado = numero * contador;
        	printf ("\n%d X %d = %d", numero, contador, resultado);
		}
	}	

}
