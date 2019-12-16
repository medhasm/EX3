#include <stdio.h>
#include "Insert.h"
void shift_element(int* arr, int i){
	if(i>0)
	{		
int *p;
p=arr;
for(i>0;i--)
{
*(p+i)=*(p+i-1);
}
*p=NULL;
	}
}
void insertion_sort(int* arr , int len){
	for(int i=1;i<len;i++){
		int j=i-1;
		int counter=;
		while(*(arr+i)<*(arr+j) && j>=){
			j--;
			counter+=1;
		}
		int *p=*(arr+i);
		shift_element(*(arr+j),counter);
		*(arr+j)=*p;
	}
	
		
}
