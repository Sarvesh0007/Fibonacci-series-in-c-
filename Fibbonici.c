#include<stdio.h>
int fibbonaci(int,int);
int main()
{
	int n,i;
	printf("\nEnter the number of terms of series =");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("\nFibbonaci(%d) =%d",i,fibbonaci(i));
	return 0;
}
int fibbonaci(int num)
{
	if(num<=2)
	return 1;
	return(fibbonaci(num-1)+fibbonaci(num-2));
}







