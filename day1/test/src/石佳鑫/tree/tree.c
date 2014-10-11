#include <stdio.h>
#include <string.h>
FILE*in,*out;
int main()
{
	in=fopen("tree.in","r");
	out=fopen("tree.out","w");
	int i,j,n;
	int bfs[100000],dfs[1000000];
	fscanf(in,"%d",&n);
	memset(bfs,0,sizeof(bfs));
	memset(dfs,0,sizeof(dfs));
	for (i=1;i<=n;i++) fscanf(in,"%d",&dfs[i]);
	for (j=1;j<=n;j++) fscanf(in,"%d",&bfs[j]);
	j=1;
	for (i=1;i<=n;i++)
		if (bfs[i]!=dfs[i]) j=0;
	if  (j)
	{
		fprintf(out,"%I64d.000",(bfs[n]-bfs[1]-1));
		fclose(in);
		fclose(out);
		return 0;
	}
	fprintf(out,"%I64d.000",(dfs[n]-dfs[1]-1));
	fclose(in);
	fclose(out);
	return 0;
	}