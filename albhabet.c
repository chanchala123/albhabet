#include<stdio.h>
int main()
{
	char c;
	printf("enter the value");
	scanf("%c",&c);
if ((c>='a' && c<='z')||(c>='A' && c<='Z'))
	printf("%c albhabhet",c);
else
	printf("%c not albhabhet",c);
	return 0;
}
