#include<stdio.h>

int fib(int n);

int main()
   {
   	int i=0,n,c;
    printf("Input The Number:");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    
    for(c=1;c<=n;c++)
	{
	printf("%d\n",fib(i));
	i++;
	} 
	
	return 0;   
   }
   
   int fib(int n)
   {
   	if(n==0)
	   
   	return 0;
   	
   	else if(n==1)
   	return 1;
   	else 
   	
   	return (fib(n-1)+fib(n-2));
   
   }
