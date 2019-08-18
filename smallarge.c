#include<stdio.h>

void main()
{
int a[5];
int i,s,l=0;
printf("Enter the elements in the array:");
for(i=0;i<5;i++)
scanf("%d", &a[i]);
s=a[0];
for(i=0;i<5;i++)
{
 if(a[i]<s)
 s=a[i];
 if(a[i]>l)
 l=a[i];
}
printf("Smallest number=%d\n", s);
printf("Largest number=%d", l);
}
