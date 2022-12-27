#include <stdio.h>

int main(){

	double valor;
	int cemReais, cinquentaReais, vinteReais, dezReais, cincoReais, doisReais, umReal, cinquentaCents, vinteCincoCents, dezCents, cincoCents, umCents;	
	scanf("%lf", &valor);
	
	umCents = valor * 100;
	cemReais = umCents / 10000;
	umCents = umCents % 10000;
	cinquentaReais = umCents / 5000;
	umCents = umCents % 5000;
	vinteReais = umCents / 2000;
	umCents = umCents % 2000;
	dezReais = umCents / 1000;
	umCents = umCents % 1000;
	cincoReais = umCents / 500;
	umCents = umCents % 500;
	doisReais = umCents / 200;
	umCents = umCents % 200;
	umReal = umCents / 100;
	umCents = umCents % 100;
	cinquentaCents = umCents / 50;
	umCents = umCents % 50;
	vinteCincoCents = umCents / 25;
	umCents = umCents % 25;
	dezCents = umCents / 10;
	umCents = umCents % 10;
	cincoCents = umCents / 5;
	umCents = umCents % 5;	

	printf ("NOTAS:\n");	
	printf ("%i nota(s) de R$ 100.00\n", cemReais);	
	printf ("%i nota(s) de R$ 50.00\n", cinquentaReais);	
	printf ("%i nota(s) de R$ 20.00\n", vinteReais);	
	printf ("%i nota(s) de R$ 10.00\n", dezReais);	
	printf ("%i nota(s) de R$ 5.00\n", cincoReais);	
	printf ("%i nota(s) de R$ 2.00\n", doisReais);	
	printf ("MOEDAS:\n");	
	printf ("%i moeda(s) de R$ 1.00\n", umReal);	
	printf ("%i moeda(s) de R$ 0.50\n", cinquentaCents);	
	printf ("%i moeda(s) de R$ 0.25\n", vinteCincoCents);	
	printf ("%i moeda(s) de R$ 0.10\n", dezCents);	
	printf ("%i moeda(s) de R$ 0.05\n", cincoCents);	
	printf ("%i moeda(s) de R$ 0.01\n", umCents);

	return 0;

}