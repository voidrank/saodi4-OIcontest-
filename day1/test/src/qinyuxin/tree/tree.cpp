#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;

vector<int> G[10001];
int n,b[10010],d[10010],ans=-1;
bool vis[10010];

int pos(int i,int s,int t)
{
	for(int j=s;j<=t;j++)
		if(d[j]==b[i])
			return j;
	return -1;
}

void deal(int s1,int t1,int s2,int t2)
{
	int i,j,k=s1;
	for(i=s2;i<=t2;i++)
	{
		j=pos(i,s1,t1);
		if(j<k)
			break;
		k=j;
	}
	if(i<=t2)
	{
		for(int k=s2;k<=i-1;k++)
		{
			G[d[s1]].push_back(b[k]);
			G[b[k]].push_back(d[s1]);
		}
	    int ns1=s2,nt1,ns2=i,nt2;
	    for(int k=s2+1;k<=i-1;k++)
	    {
	 	    nt1=pos(k,s1,t1)-1;
		    nt2=ns2+nt1-ns1-1;
		    deal(ns1,nt1,ns2,nt2);
			ns2+=nt1-ns1;
			ns1+=nt1-ns1+1;
	    }
		deal(ns1,t1,ns2,t2);
    }
	else
	{
		for(int k=s2;k<=t2;k++)
		{
			G[d[s1]].push_back(b[k]);
			G[b[k]].push_back(d[s1]);
		}
	}
	return;
}

void DFS(int i,int depth)
{
	for(unsigned int j=0;j<G[i].size();j++)
		if(!vis[G[i][j]])
		{
			vis[G[i][j]]=true;
			DFS(G[i][j],depth+1);
			vis[G[i][j]]=false;
		}
	if(depth>ans)
		ans=depth;
	return;
}

int main()
{
	FILE *in,*out;
	in=fopen("tree.in","r");
	out=fopen("tree.out","w");
	fscanf(in,"%d",&n);
	for(int i=1;i<=n;i++)
		fscanf(in,"%d",&d[i]);
	for(int i=1;i<=n;i++)
		fscanf(in,"%d",&b[i]);
	for(int i=1;i<=n;i++)
	{
		if(d[i]!=b[i])
			break;
		if(i==n&&d[i]==b[i])
		{
			printf("%.3f",(float)(n-1));
			return 0;
		}
	}
	deal(1,n,2,n);
	memset(vis,false,sizeof(vis));
	for(int i=1;i<=n;i++)
	{
		vis[i]=true;
		DFS(i,0);
		vis[i]=false;
	}
	fprintf(out,"%.3f",(float)ans);
	fclose(in);
	fclose(out);
	return 0;
}
