#include<stdio.h>
int main()
{
int l,r,i,count=0,j,tot;
scanf("%d%d",&l,&r);
for(i=l;i<=r;i++)
{
	count=0;
         for(j=1;j<=r;j++)
	if(i%j==0)
	count++;
	if(count==2)
	tot++;
}
	printf("%d",tot);
return 0;
}
