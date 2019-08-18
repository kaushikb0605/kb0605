#include<stdio.h>

void main()
{
int n;
printf("Enter size of array:");
scanf("%d", &n);
int a[n];
int i,t=0;
printf("Enter the elements in the array:");
for(i=0;i<n;i++)
scanf("%d", &a[i]);
for(i=0;i<n;i++)
{
t=a[i];
a[i]=a[n-1-i];
a[n-1-i]=t;
}
for(i=0;i<n;i++)
printf("%d\n", a[i]);
}

