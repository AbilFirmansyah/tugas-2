#include <stdio.h>
int main()
{
	float diameter, jari, volume;
	
	diameter=15.00;
	jari = diameter /2;
	volume=(4.0/3.0)*3.14*jari;
	
	printf("volume bangun ruang bola dengan diameter 15 adalah %2.f", volume);
	return 0;
}
