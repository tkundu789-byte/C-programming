//W.p.c to check a number is prime or not using while loop
#include<stdio.h>
int main()
    { int i,n,f=0;
	printf("\n enter a number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{f=1;
		break;
	}
		}
		if(f==0)
		printf("\n its a prime no.");
		else
		printf("\n its not");
		return 0;
		
	
}
