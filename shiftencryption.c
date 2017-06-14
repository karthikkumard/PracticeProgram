/* 
i/p:
abcd13
2  //x value
1  //y value


o/p:
cdef24

explain:
adding x value to alphabets and y value to numbers


*/
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
char str[100];
int i,x,y,d,len,e;
scanf("%[^\n]s",str);
scanf("%d%d",&x,&y);
len=strlen(str);
for(i=0;i<len-1;i++)
{
    if(str[i]>47&&str[i]<58)
    {
        d=str[i]-'0';
        d=d+y;
        printf("%d",d);
        
    }
    else if(str[i]==' ')
    {
        printf(" ");
    }
    else
    {
        str[i]=str[i]+x;
        if(str[i]>122)
        {
            e=str[i]-122;
            str[i]=96+e;
        }
        printf("%c",str[i]);
    }
}
}
