#include <stdio.h>
#include "Insert.h"
#define Lenght 50
int main(){
double Array[Lenght]={0};
for(int i=0;i<Lenght;i++){
printf("Enter An Integer To Cell %d : \n",i);
scanf("%d",&*(Array + i));
}
int *p;
p=Array;
insertion_sort(*p ,Lenght);
for(int i=0;i<Lenght;i++){
	printf("Array[%d]= %d,",i,*(p+i));
}
}