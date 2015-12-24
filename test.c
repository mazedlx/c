#include <stdio.h>
#include <stdbool.h>
int main(void) {
	int i, n;
	bool prime = 0;
	for(i = 2; i<= 10000000; i++) {
		for(n = 2; n<i; n++) {
			if(i%n == 0) { 
				prime = false;
				break;
			} else {
				prime = true;
			} 			
		}
		if(prime) {
			printf("%i ist eine Primzahl\n",i);
		}
	}
}




