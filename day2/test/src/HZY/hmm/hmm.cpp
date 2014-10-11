#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
int m,n,q,o[1000];
float p[50],a[50][50],b[50][50],sum=0;
void dfs(int w,float k,int l){
	for(int i=0;i<n;i++)
	   sum+=a[i][o[w]]*k;
	if(w<m)
	   for(int i=0;i<n;i++)
	      dfs(w+1,k*b[l][i],i);
}
int main(){
	freopen("hmm.in","r",stdin);
	freopen("hmm.out","w",stdout);
	memset(p,0,sizeof(p));
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(o,0,sizeof(o));
	cin>>n>>m>>q;
	for(int i=0;i<n;i++)
	   cin>>p[i];
	for(int i=0;i<n;i++)
	   for(int j=0;j<q;j++)
	      cin>>a[i][j];
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	      cin>>b[i][j];
	for(int i=0;i<m;i++)
	   cin>>o[i];
	for(int i=0;i<n;i++)
	   dfs(0,p[i],i);
 	printf("%.4f\n",sum/(n*m));
	fclose(stdin);
 	fclose(stdout);
	return 0;
}
