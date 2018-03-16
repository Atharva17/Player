#include <stdio.h>
#include<string.h>
int main(void)
{
   char a[50],b[50];
   int l1,l2,s1,s2,i,j,count=0;
   scanf("%s",a);
   scanf("%s",b);
   l1=strlen(a);
   l2=strlen(b);
   if(l1==l2)
      for(i=0;i<l1;i++)
        for(j=i+1;j<l2;j++)
         {
            s1=a[i]-a[j];   printf("%d\t",s1);
            s2=b[i]-b[j];   printf("%d\n",s2);
           	if(s1==s2)
          	 count=0;
         	else
             count++;
         }
   else
     printf("no");
   if(count==0)
     printf("Yes");
   else
     printf("No");
         return 0;
}

