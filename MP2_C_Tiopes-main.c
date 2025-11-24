// Matthew Gavin A. Tiopes S19B
// This file calls the ASM function
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void imgCvtGrayFloatToInt(int size, float *og_arr, int *final_arr);

int main(){
	
	int i, j;
	int m = 10; // init values for perfomance testing
	int n = 10; // init values for perfomance testing
	
	clock_t start_time, end_time;
    double time_spent_seconds;
    start_time = clock();
    
	
	// for correctness check
	printf("Enter the height: ");
	scanf("%d", &m);
	printf("Enter the width: ");
	scanf("%d", &n);
	printf("\n");
	
	
	int size = m*n;	
	float OG[size];
	int final[size];
	
	/* // FOR PERFORMANCE TESTING
	srand(time(NULL));
	for (i = 0; i < size; i++){
		OG[i] = (float)rand() / (float)RAND_MAX;
	}
	*/
	
	// for correctness check
	printf("Input floating point pixel values:\n");
	for (i = 0; i < size; i++){
		scanf("%f", &OG[i]);
	}
	
	
	imgCvtGrayFloatToInt(size, OG, final);
	
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%d ", final[i * n + j]);		
		}
	printf("\n");
	}
	
	end_time = clock();
	time_spent_seconds = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Execution time: %lf seconds\n", time_spent_seconds);
	
	return 0;
}
