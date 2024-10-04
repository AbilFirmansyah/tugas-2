#include <stdio.h>
#include <math.h>
int main() {
	double alas = 4.0;
	double tinggi = 5.0;
	
	double miring = sqrt((alas * alas) + (tinggi * tinggi));
	printf("panjang sisi miring segitiga adalah: %.2f cm\n",miring);
	return 0;
}


