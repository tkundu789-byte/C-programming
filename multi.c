//w.c.p which except an integer num and print the multification of the digit
#include<stdio.h>
int main()
{
	int i=1,n=1;
	int result =1;
	printf("enter value");
	scanf("%d",&n);
	while(i<=n){
		result*=i;
		i+=1;
		
	}
	printf("result%\d",result);
	return 0;
}

