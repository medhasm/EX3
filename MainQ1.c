#include <stdio.h>
#include "Insert.h"
#define Lenght 50
int main(){
int Array[Lenght]={0};
for(int i=0;i<Lenght;i++){
printf("Enter An Integer To Cell %d : \n",i);
scanf("%d",&*(Array + i));
}

insertion_sort(Array ,Lenght);
for(int i=0;i<Lenght;i++){
	printf("Array[%d]= %d \n",i,*(Array+i));
}
return 0;
}
