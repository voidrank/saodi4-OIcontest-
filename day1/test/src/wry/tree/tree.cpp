#include<stdio.h>
struct node
{
	int x,v,b,d;
};
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	struct node a[10100];int ans=0;
	int x3,bfs[10100],dfs[10100],i,j,n,t=2,d,x1,x2,x0=2,r,l=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",&dfs[i]),a[i].v=0,a[i].x=0;
	for(i=1;i<=n;i++)scanf("%d",&bfs[i]);
	a[1].x=dfs[1],a[1].d=1,a[1].b=1;
	a[2].x=bfs[2];a[2].v=1,a[2].b=2,a[2].d=2;
	r=n;x1=2;x3=0;
	while(t<n)
	{
		while(bfs[t]<bfs[t+1])
		{
			for(i=1,x2=0;i<=n;i++)
			{
				if(dfs[i]==bfs[t+1]){x2=i;break;}
			}
			if(x1<x2&&x2<=r)
			{a[++x0].x=bfs[++t],a[x0].b=t,a[x0].d=x2,a[x0].v=l;
				x1=x2;
			}else {a[++x0].x=bfs[++t],a[x0].b=t,a[x0].d=x2;
				x1=x2;x3=1;break;}
		}
		l++;r=a[l+1].d;
		if(x3==0)
		{for(i=1,x2=0;i<=n;i++)
		{
			if(dfs[i]==bfs[t+1]){x2=i;break;}
		}
			a[++x0].x=bfs[++t],a[x0].b=t,a[x0].d=x2,
				x1=x2;
		}
		while(!(a[x0].d<r&&a[x0].d>a[l].d))l++,r=a[l+1].d;
		a[x0].v=l;
	}
	d=0;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{	d=0;
			x1=i,x2=j;
			while(x1!=x2)
			{
				if(a[x1].b<a[x2].b)d++,x2=a[x2].v;
				else d++,x1=a[x1].v;
			}
			ans=d>ans? d:ans;
		}
	}
	printf("%.3lf",double(ans));
	return 0;
}