#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

const int maxn=100001;
int n;

vector<int> G[maxn];
bool vis[maxn],leaf[maxn];
int son[maxn];

int deal2(int k)
{
	int sum1=0,sum2=0;
	for(int i=0;i<G[k].size();i++)
	if(!vis[G[k][i]])
	{
		vis[G[k][i]]=true;
		if(leaf[G[k][i]])
		sum2++;
		else
		sum1+=deal2(G[k][i]);
	}
	if((sum2+1)%2==0||sum2==son[k]-1)
	sum2=(sum2+1)/2;
	else
	sum2=sum2/2;
	return sum1+sum2;
}

int deal1(int k)
{
	int sum=1;
	for(int i=0;i<G[k].size();i++)
	if(!vis[G[k][i]])
	{
		vis[G[k][i]]=true;
		sum+=deal1(G[k][i]);
	}
	if(G[k].size()==1)
	leaf[k]=true;
	son[k]=sum;
	return sum;
}

int main()
{
	FILE *in,*out;
	in=fopen("cafetable.in","r");
	out=fopen("cafetable.out","w");
	fscanf(in,"%d",&n);
    for(int i=1;i<=n-1;i++)
    {
    	int u,v;
    	fscanf(in,"%d%d",&u,&v);
    	G[u].push_back(v);
    	G[v].push_back(u);
    }
    memset(vis,0,sizeof(vis));
    memset(son,0,sizeof(son));
    memset(leaf,0,sizeof(leaf));
    vis[1]=true;
    deal1(1);
    memset(vis,0,sizeof(vis));
    vis[1]=true;
    fprintf(out,"%d\n",deal2(1));
    fclose(in);
    fclose(out);
	return 0;
}
