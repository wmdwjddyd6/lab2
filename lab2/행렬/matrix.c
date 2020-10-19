#include <stdio.h>
#include <stdlib.h>

void main(){
	int row, col, **matrix1, **matrix2, **result;
	int x, y;

	printf("행, 열 크기 입력\n");
	scanf("%d %d", &row, &col);
  
	result = (int **)malloc(row * sizeof(int *));
	matrix1 = (int **)malloc(row * sizeof(int *));
	matrix2 = (int **)malloc(row * sizeof(int *));
  
	for (x = 0; x < row; x++){
		matrix1[x] = (int *)malloc(col * sizeof(int));
		matrix2[x] = malloc(col * sizeof(int *));
		result[x] = malloc(col * sizeof(int *));
	}
	srand(0);
	printf("행렬 1\n");
	for ( x = 0; x < row; x++){
		for ( y = 0; y < col; y++){
			matrix1[x][y] = rand() % 10;
			printf("%d ",matrix1[x][y]);
		}	
		printf("\n");
	}
	
	printf("행렬 2\n");
	for ( x = 0; x < row; x++){
		for ( y = 0; y < col; y++){
			matrix2[x][y] = rand() % 10;
			printf("%d ",matrix2[x][y]);
		}
		printf("\n");
	}
	printf("더한 행렬\n");

	for ( x = 0; x < row; x++){ 
		for ( y = 0; y < col; y++){
			result[x][y] = matrix1[x][y] + matrix2[x][y];
			printf("%d ",result[x][y]);
		}
		printf("\n");
	}
	for (x = 0; x < row; x++){
		free(matrix1[x]);
		free(matrix2[x]);
		free(result[x]);      
	}
	free(matrix1);
	free(matrix2);
	free(result);  
}
