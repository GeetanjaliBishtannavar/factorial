#include <stdio.h>
 
int main(){
	int num,i,f=1;
	scanf("%d", &num);   
	for(i=1; i<=num;i++)
	{
	    f=f*i;
	}
	printf("%d\n", f);       // Writing output to STDOUT
}
