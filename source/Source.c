#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int i, j, a[N],temp;
	printf("please enter ten number¡G");
	for (i=0;i<N;i++)
	{
		scanf_s("%d",&a[i]);
	}
	for(i=N-1;i>=0;i--)
	{
		for (j=i-1;j>=0;j--)
		{
			if (a[j] > a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			else
				continue;
		}
	}
	for (i = 0; i <N; i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	system("pause");
}