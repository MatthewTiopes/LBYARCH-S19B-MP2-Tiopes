// Matthew Gavin A. Tiopes S19B
// This file calls the C function
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imgCvtGrayFloatToInt(int size, float *og_arr, int *final_arr){
	int i = 0;
	int final;
	float curr;
	
	for (i = 0; i < size; i++){
		curr = og_arr[i];
		final = curr * 255;
		final_arr[i] = final;
	}
}

int main(){
	
	int i, j;
	int m = 100;
	int n = 100;
	
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
	
	/*
	srand(time(NULL)); 
	for (i = 0; i < size; i++){
		OG[i] = (float)rand() / (float)RAND_MAX;
	}
	*/
	
	// for correctness check
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
