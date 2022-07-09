#include <stdio.h>

int main(void) {
	
	unsigned long int n = 1;
	int j = 0;
	for (int i = 1; i <65; i++) {
		j = j + n;
		n = 2 * n;		
		printf(" Sayi: %ld\t%i\n", n, i);
	} if (j<0) {
		j = j * (-1);
		printf("Sayi2: %i\n", j);
	}
}
