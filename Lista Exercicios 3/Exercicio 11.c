/*
Faça um programa que receba o valor de um carro
e mostre uma tabela com os seguintes dados:
• Preço final;
• Quantidade de parcelas
• Valor da parcela.
Considere o seguinte:
• O preço final para a compra à vista tem desconro de 20%;
• A quantidade de parcelas pode ser: 
6, 12, 18, 24, 30, 36, 42, 48, 54 e 60;
• Os percentuais de acréscimos encontram-se na tabela a seguir:
Quantidade de Parcelas Percentual de acréscimo sobre o preço final
6 3%
12 6%
18 9%
24 12%
30 15%
36 18%
42 21%
48 24%
54 27%
60 30%
*/
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
