#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void Push(int *s, int *t);
void Pop(int *s, int *t);
int Disp(int *s, int t);

int main()
{
    int a;
    int stack[MAX];
    int t=-1;
    while(1)
    {
    printf("Press 1 for push\n");
    printf("Press 2 for pop\n");
    printf("Press 3 for display\n");
    printf("Press 4 for exit");
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        Push(stack, &t);
        break;
    case 2:
        Pop(stack, &t);
        break;
    case 3:
        Disp(stack, t);
        break;
    case 4:
        exit(0);
    default:
        printf("INVALID CHOICE");
    }
    }
}
void Push(int *s, int *t)
{
    if((*t)>=MAX)
    {
        printf("STACK IS FULL\n");
        return;
    }
    int val;
    printf("Enter value");
    scanf("%d", &val);
    (*t)++;
    s[*t]=val;
    return;
}
void Pop(int *s, int *t)
{
    if((*t)<0)
    {
      printf("Stack is empty\n");
      return;
    }
(*t)--;
return;
}
int Disp(int *s, int t)
{
    int i;
    for(i=t;i>=0;i--)
    printf("%d \t", s[i]);
}

