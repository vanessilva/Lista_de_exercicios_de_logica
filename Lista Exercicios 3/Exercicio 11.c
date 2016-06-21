main()
{
	float qtd_parcela;
	float valor_parcelas, valor_carro, valor_vista;
	
	printf ("Digite o valor do carro: ");
	scanf ("%f", &valor_carro);
	
	valor_vista = valor_carro - (valor_carro * 0.20);
	printf ("Valor a vista com desconto de 20%% R$: %.2f\n", valor_vista);
	
	
	for (qtd_parcela = 6; qtd_parcela <= 60; qtd_parcela = qtd_parcela + 6)
	{
	valor_parcelas = (valor_carro + valor_carro * (qtd_parcela / 200)) / qtd_parcela;
	printf ("Valor do parcelamento em %.f vezes R$: %.2f\n", qtd_parcela, valor_parcelas);
	}	
}
