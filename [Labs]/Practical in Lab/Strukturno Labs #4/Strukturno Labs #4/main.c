/* Programa koja gi presmetuva sumite na parovite cifri od petcifren broj, vnesen od tastatura, i gi prikazuva na ekran, zaedno so tretata cifra, koja ostanuva sama*/

#include <stdio.h>
int main() {
	int broj, cif1, cif2, cif3, cif4, cif5, suma1, suma2;
	scanf("%d", &broj);
	cif1=broj/10000;
	cif2=(broj/1000)%10;
	cif3=(broj/100)%10;
	cif4=(broj/10)%10;
	cif5=broj%10;
	suma1=cif1+cif5;
	suma2=cif2+cif4;
	printf("%d %d %d", suma1, suma2, cif3);

	return 0;
}
