#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n,m,a[1000001]={0},b[1000001]={0};
int main()
{
	int i,k=1,p=0,q=0;
	freopen("sound.in","r",stdin);
	freopen("sound.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;++i)k*=2;
	for(i=1;q<=65535;++i)
	{
		b[i]=i*k;
		q=b[i];
	}
	for(i=1;i<=n;++i)
	{
		scanf("%d",&a[i]);
		p=a[i]/k;
		if(a[i]-b[p]<b[p+1]-a[i]) a[i]=p;
			else a[i]=p+1;
	}
	for(i=1;i<=n;++i)printf("%d ",b[a[i]]);
	return 0;
}