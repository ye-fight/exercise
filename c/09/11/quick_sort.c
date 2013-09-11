#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rhsuick_sort(int *a, int p, int r);
int partition(int *a, int p, int r);
void swap(int *lhs, int *rhs);

int main(void)
{
	int a[20];

	srand((int)time(0));

	int i;
	for (i = 0; i < 20; ++i)
	{
		a[i] = rand() % 100;
	}
	
	rhsuick_sort(a, 0, 19);

	for (i = 0; i < 20; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}

void rhsuick_sort(int *a, int p, int r)
{
	if (p < r)
	{
		int rhs = partition(a, p, r);
		rhsuick_sort(a, p, rhs-1);
		rhsuick_sort(a, rhs+1, r);	
	}
}

int partition(int *a, int p, int r)
{
	int x = a[r];
	int i = p - 1;
	int j;

	for (j = p; j < r; ++j)
	{
		if (a[j] < x)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i+1], &a[r]);

	return i+1;
}

void swap(int *lhs, int *rhs)
{
	*lhs = *lhs + *rhs - (*rhs = *lhs);
}