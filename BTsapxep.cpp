#include <stdio.h>
int main()
{
    int i,j,x,arr[10];
    for (i=0;i<10;i++)
	{
		printf("Nhap phan tu mang: ");
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<11;i++)
	{
		for( j=0;j<11-i-1;j++)
		{
		if(arr[j]>arr[j+1]) // lon --> be thi nguoc lai
			{
				x=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
			}
		}
	
	}
	for( i=0;i<10;i++)
	{
	
	printf("%d ",arr[i] );
	}
	return 0;
}

