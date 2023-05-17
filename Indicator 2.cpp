#include<stdio.h>

main()
{
	int a[100]={86,96,35,75,58,63};
	
	int *p1;
        
        p1 = &a;
	    
	    int i;
	    for(i=0;i<=5;i++)
	    {
	    	printf("%u =>d\n",p1+i,*(p1+i));
		}
}
