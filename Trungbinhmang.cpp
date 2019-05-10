#include <stdio.h>
int main()
{
	int arr[10];
	for (int i=0; i<10; i++)
	{
		printf("Nhap so: \n");
		scanf("%d",&arr[i]);
	}
	int s=0;
	for (int i=0; i<10;i++)
	{
		s+=arr[i];
		
	}
	printf("Gia tri trung binh: %d ",s/10);
	return 0;
}
