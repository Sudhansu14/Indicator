#include<stdio.h>

main()
{

  int*a,*b
 
 {
    int temp=*a;
    *a=*b;
    *b=temp;
 }
 

  reverse(int array[], int array_size)
  {
    
    int *pointer1 =array,
 
        *pointer2 =array+array_size-1;
        
    while (pointer1<pointer2) 
	{
        swap(pointer1,pointer2);
        pointer1++;
        pointer2--;
    }
 }

}
 
