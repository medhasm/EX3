#include <stdio.h>
#include "Insert.h"

void shift_element(int* arr, int i){
	if(i>0)
	{		
int *p;
p=arr;
for(int z=i;z>0;z--)
{
*(p+z)=*(p+z-1);
}
*p=0;
	}
}
void insertion_sort(int* arr , int len){
	for(int i=1;i<len;i++){
		int j=i-1;
		int counter=0;
if(*(arr+i)>*(arr+j)){
 continue;
}
		while(*(arr+i)<*(arr+j) && j>=0){
			if(j==0){
			j=0;
			counter+=1;
				break;
			}else{
			j-=1;

			counter+=1;
}

		}

j=i-counter;

  int x;
		x=*(arr+i);
		shift_element((arr+j),counter);
		*(arr+j)=x;


}	
		
}
