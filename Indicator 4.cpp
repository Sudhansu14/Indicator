#include<stdio.h>

main()
{
	int a[100],n,i;
	int *p;
	p= &a;
	printf("enter value of N:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	
	printf("element in array arr:");
	for(i=0;i<n;i++)
	
	{
		printf("%d",*p+i);
        }
	
	printf("\nrevers array:");
	rev=&a[n-1];
	
	for(i=0;i<n;i++)
	{
		printf("%d",*rev--);
	}	
}
 
