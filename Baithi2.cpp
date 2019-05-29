#include <stdio.h>

bool isPrime(int number)
{
	int n,m;
    if (number < 2){
        return false;
    }       
     
    for (int i = 2; i <= number/2 ; ++i){
        if (number % i == 0){
            return false;
        }   
    }
    return true;
}
int main()
{
    int number,n,m,i;
    printf("Please, enter a number: \n");
    scanf("%d\n",&n);
    scanf("%d",&m);
    printf("The prime numbers between %d and %d:\n",n,m);
    for (int j = n + 1; j < m; ++j) {
    	if(isPrime(number)){
    		printf("%d");
		}
	}
	return 0;
}
