#include<stdio.h>
int main()
{
char a;
scanf("%d",&a);
if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
printf("alphabet");
else
printf("Not an alphabet");
return 0;
}
