/*
Fa�a um programa que receba um n�mero, 
calcule e mostre a tabuada desse n�mero.
*/
main()
{
	int numero, resultado, contador;
	
	printf ("Digite um numero: ");
	scanf ("%d", &numero);
	
	for (contador = 0; contador <= 10; contador = contador + 1)
	{
	    resultado = numero * contador;
        printf ("\n%d X %d = %d", numero, contador, resultado);
	}
}
