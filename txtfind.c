#include <stdio.h>
#include "txtfind.h"
#include <string.h>
#define LINE 256
#define WORD 30

int substring( char *str1, char *str2)
{
    int i,j=0;
    int len1=strlen(str1);
    int len2=strlen(str2);

    if(len1<len2) return 0;

    for (i=0;i<len1&&j<len2;i++)
    {
        if ((str1+i)==(str2+j))
            j++;
        
            else j=0;

        if(j==len2)
            return 1;
         
    }

    return 0;
}
int similar (char *s, char *t)
{
    int n=1,j=0;
    int slen=strlen(s);
    int tlen=strlen(t);

    if((slen-tlen)>n)
        return 0;

    if(slen==tlen&&substring(s,t))
        return 1;

    if(slen<tlen)
        return 0;   

    for(int i=0;i<slen&&j<tlen;i++)
    {
        if((s+i)==(t+j))
            j++;

        else
            n-=1;

        if(n<0)
            return 0;    
    }

    return 1;
}
void print_lines(char * str)
{   
  
     char line[LINE];

    fgets(line,LINE,stdin);

    while (!feof (stdin))
    {
        fgets(line,LINE,stdin);

        if(substring(line,str))
            printf("%s", line);

    }

    fclose(stdin);
}
void print_similar_words(char * str)
{
     
    char wordCheak[WORD];

    fscanf(stdin,"%s\n",wordCheak);

    while (!feof (stdin))
    {
        fscanf(stdin,"%s\n",wordCheak);

        if(similar(wordCheak,str))
            printf("%s\n", wordCheak);
    }

    fclose(stdin);
}
