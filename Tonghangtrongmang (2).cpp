#include <stdio.h>
int main()
{
    int m,n,i,j;
    do 
    {
    	printf ("Nhap m=\n");
    	scanf("%d",&m); 
	}while(m<=0);
	do 
    {
    	printf ("Nhap n=\n");
    	scanf("%d",&n);
	}while(n<=0);  
	int A[m][n],B[m][n];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf ("Nhap A[%d][%d] = \n",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf ("Nhap B[%d][%d] = \n",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	int C[m][n],D[m][n];
	for (int i=0; i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			C[i][j]=A[i][j] + B[i][j];
			D[i][j]=A[i][j] - B[i][j];
 		}
	}
	printf("Ma tran tong: \n");
	for (int i=0; i<m; i++)
	{
		for (int j=0;j<n;j++)
		{
			printf ("%5d",C[i][j]);
		}
			printf ("\n");
	}
	printf("Ma tran hieu: \n");
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf ("%5d",D[i][j]);
		
		}
			printf ("\n");
	}
	
	return 0;
}
