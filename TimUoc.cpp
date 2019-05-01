#include <stdio.h>
int main()
{
	/* int i=1 ,n;
	printf("Nhap n: ");
	scanf("%d",&n); 
	while (i<=n)
	{
		if (n % i == 0)
		
		
			printf ("%d ",i);
			i++;	
	}	*/
	int n;
	printf("Nhap n: ");
	scanf("%d",&n); 
	for (int i=1;i<=n;i++)
	{
		if (n%i ==0)
		printf ("%2d",i);
		
	}  
	return 0;
}
