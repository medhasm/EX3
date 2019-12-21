#include <stdio.h>
#include "txtfind.h"
#include <string.h>

#define LINE 256
#define WORD 30


int main()
{
    
   
	char wordSerch[WORD];
    char Option;
	fscanf(stdin,"%s\n%c",wordSerch,&Option);

if(Option =='a')
{
    print_lines(wordSerch);
}
if(Option=='b')
{
    print_similar_words(wordSerch);
}
	
	return 0;
}
