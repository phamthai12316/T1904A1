#include <stdio.h>

bool isPrime(int number)
{	
    if (number < 2){
        return false;
    }       
     
    for (int i = 2; i <= number ; ++i){
        if (number % i == 0){
            return false;
        }   
    }
	return true;
}
int main()
{
    int number;
    printf("Number: ");
    scanf("%d",&number);
    if (isPrime(number)){
        printf("1");
    }
    else {
    	printf("0");
    }
    return 0;
}

