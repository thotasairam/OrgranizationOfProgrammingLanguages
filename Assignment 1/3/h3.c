//CS 3363
//
//Programming assignment 1
//Problem 3
//
//Sai Ram Thota
//CWID : 11573236
//
//=======================================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	//Intializing variables
	// mr1 and mr2 are rows of matrix1 and matrix2
	// mc1 and mc2 are columns of matrix1 and matrix2
	// t1, t2, t3 and t4 are temperary variables
	int option; 
	int mr1, mc1, mr2, mc2, t1, t2, t3, t4; 
	
	//input
	printf("Enter the rows of M_1: ");
	scanf("%d", &mr1);
	
	while(getchar() != '\n');
	printf("Enter the columns of M_1: ");
	
	scanf("%d", &mc1);
	
	while(getchar() != '\n');
	printf("Enter the rows of M_2: ");
	
	scanf("%d", &mr2);
	
	while(getchar() != '\n');
	printf("Enter the columns of M_2: ");
	
	scanf("%d", &mc2);
	
	while(getchar() != '\n');
		if(mc1 != mr2)
		{
			printf("Invalid multiplication!\n");
			printf("Error!(No. of Columns of M_1) != (No. of Rows of M_2).\n");
			printf("Please try again!\n");
			return 0;
		}
	int matrix1[mr1][mc1], matrix2[mr2][mc2];	
	
	// Random matrix generator
	srand(time(NULL));
	
	for(t1 = 0; t1 < mr1; t1++)
	{
		for(t2 = 0; t2 < mc1; t2++)
		{
			matrix1[t1][t2] = rand() % (10);
		}
	}
	for(t1 = 0; t1 < mr1; t1++)
	{
		for(t2 = 0; t2 < mc1; t2++)
		{
			printf(" %d ", matrix1[t1][t2]);
		}
		printf("\n");
	}
	printf("\n");
	srand(time(NULL));
	for(t1 = 0; t1 < mr2; t1++)
	{
		for(t2 = 0; t2 < mc2; t2++)
		{
			matrix2[t1][t2] = rand() % (8);
		}
	}
	for(t1 = 0; t1 < mr2; t1++)
	{
		for(t2 = 0; t2 < mc2; t2++)
		{
			printf(" %d ", matrix2[t1][t2]);
		}
		printf("\n");
	}
	//End of random generator
	
	//Prompting user to choose from below 3 options
	printf("Matrix multiplication using...\n");
	printf("1. Counting loop\n");
	printf("2. While loops\n");
	printf("3. Quit\n");
	printf("Enter your option: ");
	scanf("%d", &option);
	while(getchar() != '\n');
	int result[mr1][mc2];
	
	// Matrix multiplication
	t4 = 0;
	
	switch(option)
	{
		case 1:
			// Using counting loop
			for(t1 = 0; t1 < mr1; t1++)
			{
				for(t2 = 0; t2 < mc2; t2++)
				{
					for(t3 = 0; t3 < mr2; t3++)
					{
						t4 += matrix1[t1][t3] * matrix2[t3][t2];
					}
					result[t1][t2] = t4;
					t4 = 0;
				}
			}
			printf("Counting loop's matrix multiplication result:\n");
			for(t1 = 0; t1 < mr1; t1++)
			{
				for(t2 = 0; t2 < mc2; t2++)
				{
					printf("%6d", result[t1][t2]);
				}
				printf("\n");
			}			
			break; // end of case1
	
		case 2:
			//using logical loops
			t1 = 0;
			t2 = 0;
			t3 = 0;
			t4 = 0;
			while(t1 < mr1)
			{
				t2 = 0;
				while(t2 < mc2)
				{
					t3 = 0;
					while(t3 < mr2)
					{
						t4 += matrix1[t1][t3] * matrix2[t3][t2];
						t3++;
					}					
					result[t1][t2] = t4;
					t4 = 0;
					t2++;
				}
				t1++;
			}
			t1 = 0;
			t2 = 0;
			printf("Logical loop's matrix multiplication result:\n");
			while(t1 < mr1)
			{
				t2 = 0;	
				while(t2 < mc2)
				{
					printf("%6d", result[t1][t2]);
					t2++;
				}
				printf("\n");
				t1++;
			}
				break;//end of  case2
		
		case 3:
			printf("Quiting the program!\n");
			return 0;
			break;//end of case3
		
		default:
			printf("Error! (1 > input > 3) \n");
			printf("Please Try Again!\n");
			break;//end of default
	}
	return 0;
}
