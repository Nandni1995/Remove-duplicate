#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[5]="aabcd";
int i=0,j,k=0;
clrscr();
while(k<7)
{
if(a[i]==a[i+1])
i++;
else
{
a[k]=a[i];
i++;
k++;
}
}
for(j=0;j<k;j++)
{
printf("%c",a[j]);
}
getch();
}
