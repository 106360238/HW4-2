#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[10] = {2,6,4,8,10,12,89,68,45,37};
	int SIZE = 10;
	int pass, i, hold,ja;
	printf("Data items in original order\n");

	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d",a[i]);
	}

	for (pass = 1; pass < SIZE; ++pass)
	{
		for (i = 0; i < SIZE - 1; ++i)
		{
			ja = 0;
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
			if (a[i + 1] > a[i])
			{
				ja++;
			}
		}
		if (ja == 8)
		{ 
			break; 
		}
		SIZE--;
	}

	printf("\nData items in ascending order\n");
	for (i = 0; i < 10; ++i)
	{
		printf("%4d",a[i]);
	}
	printf("");
	system("pause");
	return 0;
}