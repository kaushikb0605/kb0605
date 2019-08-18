#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>

int POP(int *s,int *t)
{
	int o=s[*t];
	(*t)--;
	return o;
}
void PUSH(int *s,int *t,int v)
{
	(*t)++;
	s[(*t)]=v;
}
void POST()
{
printf("Enter a POSTFIX Expression to Evaluate\n");
	char postfix[50];
	int stack[50],top=-1,v1,v2,res,i;
	scanf("%s",postfix);
	for(i=0;i<strlen(postfix);i++)
	{
		if(isdigit(postfix[i]))
		{
			PUSH(stack,&top,postfix[i]-'0');
		}
		else
		{
			v1=POP(stack,&top);
			v2=POP(stack,&top);
			switch(postfix[i])
			{
				case '+':res=v2+v1;
					 break;
				case '-':res=v2-v1;
					 break;
				case '*':res=v2*v1;
					 break;
				case '/':res=v2/v1;
					 break;
			}
			PUSH(stack,&top,res);
		}
	}
	printf("Result is %d\n",stack[top]);
}
void PRE()
{
printf("Enter a PREFIX Expression to Evaluate\n");
	char prefix[50];
	int stack[50],top=-1,v1,v2,res,i;
	scanf("%s",prefix);
	for(i=strlen(prefix)-1;i>=0;i--)
	{
		if(isdigit(prefix[i]))
		{
			PUSH(stack,&top,prefix[i]-'0');
		}
		else
		{
			v1=POP(stack,&top);
			v2=POP(stack,&top);
			switch(prefix[i])
			{
				case '+':res=v1+v2;
					 break;
				case '-':res=v1-v2;
					 break;
				case '*':res=v1*v2;
					 break;
				case '/':res=v1/v2;
					 break;
			}
			PUSH(stack,&top,res);
		}
	}
	printf("Result is %d\n",stack[top]);
}
int main()
{
int ch;
  while(1)
  {
  printf("Enter 1 to evaluate Postfix operation:\n");
  printf("Enter 2 to evaluate Prefix operation:\n");
  printf("Enter 3 to exit\n");
  scanf("%d", &ch);
  switch(ch)
   {
	case 1:
	POST();
	break;
	case 2:
	PRE();
	break;
	case 3:
	exit(0);
	default:
	printf("INVALID CHOICE");
   }
  }
return 0;
}