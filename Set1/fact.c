#include <stdio.h>
int main()
{
	int res=1,num,i;
	scanf("%d",&num);
	for(i=num;i>0;i--)
	res=res*i;
	printf("%d",res);
            return 0;
	
}
