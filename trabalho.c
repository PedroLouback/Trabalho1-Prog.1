#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* O dia da semana pode ser calculado pela regra abaixo:
a. Ler dia, mês e ano.
b. Se data possui mês anterior a março (03), fazer a seguinte correção nos cálculos: 
i. ano = ano - 1 e mês = mês + 12.
c. Se data for igual ou posterior a 15/10/1582, faça:
i. A = parte inteira de (ano / 100)
ii. B = parte inteira de (A / 4)
iii. C = 2 - A + B
iv. Senão C = 0.
d. Faça:
i. D = parte inteira de 365,25 x (ano + 4716)
ii. E = parte inteira de 30,6001 x (mês + 1)
e. O dia juliano será igual a: D + E + dia + C - 1524.
f. Para saber o dia da semana, divide-se dia juliano por 7. O dia será: 
i. segunda-feira se resto=0; 
ii. terça-feira se resto=1;
iii. quarta-feira se resto=2;
iv. quinta-feira se resto = 3;
v. sexta-feira se resto = 4;
vi. sábado se resto=5; 
vii. domingo se resto=6.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int diaJuliano=0, d=0, m=0, a=0, a1=0, m1=0, i=0, resto=0, A=0, B=0, D=0, E=0; 
	float C = 0;
	char ndata;
	
	
	
	do { 
		printf("Informe o dia, o mês e o ano respectivamente: ");
		scanf("%d %d %d", &d, &m, &a);
		printf ("\n");		
		a1=a;
		m1=m;
		if (m<3) {
			a=a-1;
			m=m+12;
				}
		for (i=0;i<=10;i++,a++,a1++){
			
				 
			if (a<1582) {
				C = 0;
			} else if (a==1582 && m<10) {
				C = 0;	
			} else if (a==1582 && m==10 && d<15){	
			 	C = 0;
			} else {
				A=floor(a/100);
				B=floor(A/4);
				C=2-A+B;
			}  
			
			E=floor(30.6001*(m+1));
			D=floor(365.25*(a+4716));
			diaJuliano = D+E+d+C-1524;
			resto = diaJuliano % 7; 
		
				switch (resto){
	                case 0: printf("No dia: %d, no mês: %d no ano de: %d caiu em uma segunda-feira\n", d, m1, a1); break;
	                case 1: printf("No dia: %d, no mês: %d no ano de: %d caiu em uma terça-feira\n", d, m1, a1); break;
	                case 2: printf("No dia: %d, no mês: %d no ano de: %d caiu em uma quarta-feira\n", d, m1, a1); break;
	                case 3: printf("No dia: %d, no mês: %d no ano de: %d caiu em uma quinta-feira\n", d, m1, a1); break;
	                case 4: printf("No dia: %d, no mês: %d no ano de: %d caiu em uma sexta-feira\n", d, m1, a1); break;
	                case 5: printf("No dia: %d, no mês: %d no ano de: %d caiu em um sábado\n", d, m1, a1); break;
	                case 6: printf("No dia: %d, no mês: %d no ano de: %d caiu em um domingo\n", d, m1, a1); break;
				}
		} printf ("\nNOVA DATA ('S' - Sim; 'N' - Não)?");
		scanf( " %c", &ndata);
		printf ("\n");
	} while (ndata== 'S' || ndata== 's');
	
	
	return 0;
}
