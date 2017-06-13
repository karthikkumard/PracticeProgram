/*
i/p:
everest

o/p:
2

Explaination:
eve 
ere


two possible palindrom combination
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{

char str[100];
int i,k,l,count=0,j;
scanf("%s",str);
for(i=0;str[i];i++)
{
    for(j=i+1;str[j];j++)
    {
        if(str[i]==str[j])
        {
                   k=i;
                   l=j;
            for(;;)
            {
                if(str[k]!=str[l])
                {
                    break;
                }
                else if(k==j)
                {
                   count++;
                   break;
                }
                else
                {
                    k++;
                    l--;
                }
            }
        }
    }
printf("%d",count);
}
