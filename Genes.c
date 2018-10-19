#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#define SIZE 100000
void substring(char [], char[], int, int);
int match(const char *s, const char *p);
bool isLooked[SIZE];
int matchCount;
int len = 3;
int main()
{
	int i,num;	int counter=0;
	char gen[SIZE]; char sub[SIZE]; 

	srand(time(0));
		for(i=0;i<SIZE;i++)
		{
			num=rand()%26+65;   
			gen[i]=num;
			//printf("%c",gen[i]);         
		}
    printf("\n\n");
    printf("***\n");
	    for(counter=0;counter<=SIZE-len;counter++)
		{
			if (isLooked[counter])
            {
                    continue;
        	} 
			substring(gen, sub, counter, len);
		    //printf("%d\n",counter);
		    if(!isLooked[counter])
			{
		    if((matchCount=match(gen,sub))>10)
			{
				printf("%s %d ", sub , matchCount);
			}	
			}
			isLooked[counter]=false;
		}
	
	printf("\n\n");
	printf("****\n");
	for(counter=0;counter<=SIZE-len-1;counter++)
		{
			if (isLooked[counter])
            {
                    continue;
        	} 
			substring(gen, sub, counter, len+1);
		    //printf("%d\n",counter);
		    if(!isLooked[counter])
			{
		    if((matchCount=match(gen,sub))>1)
			{
				printf("%s %d ", sub , matchCount);
			}	
			}
			isLooked[counter]=false;
		}
	printf("\n\n");
	printf("*****\n");
		for(counter=0;counter<=SIZE-len-2;counter++)
		{
			if (isLooked[counter])
            {
                    continue;
        	} 
			substring(gen, sub, counter, len+2);
		    //printf("%d\n",counter);
		    if(!isLooked[counter])
			{
		    if((matchCount=match(gen,sub))>1)
			{
				printf("%s %d ", sub , matchCount);
			}	
			}
			isLooked[counter]=false;
		}
	printf("\n\n");
	printf("******\n");
		for(counter=0;counter<=SIZE-len-3;counter++)
		{
			if (isLooked[counter])
            {
                    continue;
        	} 
			substring(gen, sub, counter, len+3);
		    //printf("%d\n",counter);
		    if(!isLooked[counter])
			{
		    if((matchCount=match(gen,sub))>1)
			{
				printf("%s %d ", sub , matchCount);
			}	
			}
			isLooked[counter]=false;
		}
	printf("\n\n");
	printf("*******\n");
		for(counter=0;counter<=SIZE-len-4;counter++)
		{
			if (isLooked[counter])
            {
                    continue;
        	} 
			substring(gen, sub, counter, len+4);
		    //printf("%d\n",counter);
		    if(!isLooked[counter])
			{
		    if((matchCount=match(gen,sub))>1)
			{
				printf("%s %d ", sub , matchCount);
			}	
			}
			isLooked[counter]=false;
		}
	printf("\n\n");
	printf("********\n");
		for(counter=0;counter<=SIZE-len-5;counter++)
		{
			if (isLooked[counter])
            {
                    continue;
        	} 
			substring(gen, sub, counter, len+5);
		    //printf("%d\n",counter);
		    if(!isLooked[counter])
			{
		    if((matchCount=match(gen,sub))>1)
			{
				printf("%s %d ", sub , matchCount);
			}	
			}
			isLooked[counter]=false;
		}
	printf("\n\n");
	printf("*********\n");
		for(counter=0;counter<=SIZE-len-6;counter++)
		{
			if (isLooked[counter])
            {
                    continue;
        	} 
			substring(gen, sub, counter, len+6);
		    //printf("%d\n",counter);
		    if(!isLooked[counter])
			{
		    if((matchCount=match(gen,sub))>1)
			{
				printf("%s %d ", sub , matchCount);
			}	
			}
			isLooked[counter]=false;
		}
	printf("\n\n");
	printf("**********\n");
		for(counter=0;counter<=SIZE-len-7;counter++)
		{
			if (isLooked[counter])
            {
                    continue;
        	} 
			substring(gen, sub, counter, len+7);
		    //printf("%d\n",counter);
		    if(!isLooked[counter])
			{
		    if((matchCount=match(gen,sub))>1)
			{
				printf("%s %d ", sub , matchCount);
			}	
			}
			isLooked[counter]=false;
		}
	printf("\n\n");
	system("PAUSE");
	return 0;
}

void substring(char s[], char sub[], int p, int l) {
   int c = 0; 
   while (c < l) {
      sub[c] = s[p+c];
      c++;
   }
   sub[c] = '\0';
}

int match(const char *s, const char *p)
{
        int c = 0, l = strlen(p);
 		int pos = -1;
        while (*s != '\0') {
        		pos++;
                if (strncmp(s++, p, l)) continue;
                
                isLooked[pos]=true;
				c++;
                
        }
        return c;
}
