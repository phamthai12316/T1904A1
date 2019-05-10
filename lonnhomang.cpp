#include <stdio.h>
int main()
{
	int lonnho[10];
	for(int i=0;i<10;i++)
	{
		printf("Nhap thu tu mang: ");
		scanf("%d",&lonnho[i]);
	}
	int max=lonnho[0];
	int min=lonnho[0];
	int vitrimax=0;// Tim ra ca vi tri max min
	int vitrimin=0;
	for (int i=0;i<10;i++)
	{
		if(lonnho[i]>max)
		{
			max=lonnho[i];
			vitrimax=i; // i la vitri hay chinh la so vong lap mang
		}
		if(lonnho[i]<min)
		{
			min=lonnho[i];
			vitrimin=i;
		}
		
	}
	printf ("So lon nhat mang la %d o vi tri: %d \n",vitrimax,max);
	printf ("So nho nhat mang la %d o vi tri: %d",vitrimin,min);
	return 0;
}

