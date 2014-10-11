#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long  n,p,d,ans1;
	scanf("%I64d %I64d %I64d",&n,&p,&d);
	n=n%1000000009;
	p=p%1000000009;
	d=d%1000000009;
	ans1=((n-1)*d)%1000000009;
	ans1=ans1+p; 
	ans1=(ans1*ans1)%1000000009;
	ans1=(ans1*n)%1000000009;
    printf("%I64d",ans1);
	return 0;
}
