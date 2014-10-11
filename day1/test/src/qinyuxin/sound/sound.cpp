#include<cstdio>

int my_abs(int a)
{
	if(a<0)
		return -a;
	else
		return a;
}

int  main()
{
	FILE *in,*out;
	in=fopen("sound.in","r");
	out=fopen("sound.out","w");
	int n,m,v[100010],k=1;
	fscanf(in,"%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		fscanf(in,"%d",&v[i]);
	for(int i=1;i<=m;i++)
		k*=2;
	for(int i=1;i<=n;i++)
	{
		int j;
		for(j=0;;j++)
			if(v[i]>=k*j&&v[i]<=k*(j+1))
				break;
		if(my_abs(k*j-v[i])>=my_abs(k*(j+1)-v[i]))
			v[i]=k*(j+1);
		else
			v[i]=k*j;
	}
	for(int i=1;i<=n;i++)
		fprintf(out,"%d ",v[i]);
	fclose(in);
	fclose(out);
	return 0;
}
