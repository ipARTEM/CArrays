#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_LENGTH 10
#define NUMBERS_AMOUNT 1000000

void printArray(int* array, int length)
{
	

}
float average(int* array, int length)
{
	float result = 0;
	return result;
}

int main(int argc, const char*argv[])
{
	int arr[ARRAY_LENGTH];

	int i = 0;
	float result = 0;
	while (i<ARRAY_LENGTH)
	{
		printf("Enter value no.%d: ", i);
		scanf("%d", arr + i);
		i++;
	}

	printf("Out array is: ");
	for ( i = 0; i < ARRAY_LENGTH; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n And the average is: ");
	for (i = 0; i < ARRAY_LENGTH; i++)
		result += *(arr+i);

	printf("%f \n", result / ARRAY_LENGTH);


	return 0;
}