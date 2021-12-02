#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));

	int fir, sec, point[11] = {0};

	for (int i = 0; i < 36000; i++) {
		fir = rand() % 6 + 1;  
		sec = rand() % 6 + 1; 
		point[fir + sec-2]++;
	}

	printf("Sum     Total\n" );

	for (int i = 0; i < 11; i++) 
		printf("%d\t%d\n", i + 2, point[i]);
	
	system("pause");
	return 0;
}