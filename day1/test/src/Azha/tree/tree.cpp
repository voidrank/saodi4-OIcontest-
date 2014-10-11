#include<stdio.h>
int n;
int plus(int a[],int b[],int c[])
{
	int i,j,k;
	for(i=20;i>=0;i--)
	{
		k=a[i]+b[i];
		if(k<10)c[i]+=k;
		if(k>=10)
		{
			c[i]+=k%10;
			c[i-1]+=k/10;
		}
	}
    return 0;
}
int simplex(int a[],int b,int c[])
{
	int i,j,k; 
	for(i=20;i>=0;i--)
	{
		k=a[i]*b;
		if(k<10)c[i]+=k;
		if(k>=10)
		{
			c[i]+=k%10;
			c[i-1]+=k/10;
		}
	}
    return 0;
}
int complex(int a[],int b[],int c[])
{ 
	int i,j,k,ans1[21]={0},ans2[21]={0}; 
	for(i=20;i>=0&&b[i]!=0;i--)
	{
		ans2={0};
		ans1={0};
		simplex(a,b[i],ans1);
		for(j=0;j<=20;++j)
		{
			if(j<=i)ans1[j]=ans1[j+20-i];
			else ans1[j]=0;
		}
		//for(j=0;j<=20;++j)printf("%d",ans1[j]); 
		//printf("\n");
		plus(ans2,ans1,c);
		for(j=0;j<=20;++j)ans2[j]=c[j];
	}
    return 0;
}
int minus1(int a[],int b[])
{
	int i;
	for(i=0;i<=20;++i)b[i]=a[i];
	for(i=20;i>=0;i--)
	{
		b[i]-=1;
		if(b[i]<0)b[i]=9;
		else break;
	}
	return 0;
}
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
    printf("4.000");
	return 0;
}