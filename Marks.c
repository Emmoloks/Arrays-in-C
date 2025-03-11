#include <stdio.h>
int main(void)
{
	int i,n;
	int sum = 0;

	printf("Enter the number of students: ");
	scanf("%d", &n);

	int marks[n];

	for (i = 0; i < n; i++)
	{
		printf("Enter the students marks %d: ", i + 1);
		scanf("%d", &marks[i]);
		sum += marks[i];
	}
	printf("sum of students marks is : %d \n", sum);
	return 0;
}
