#include<stdio.h>
int main()
{
	FILE *in,*out;
	int n,s[100],b[100],shu[100]={0};
	int i=1,k=0,g=0;
	in=fopen("cafetable.in","r");
	out=fopen("cafetable.out","w");
	fscanf(in,"%d",&n);
	while(fscanf(in,"%d%d",&s[i],&b[i])!=EOF)
	{
		//if(s[i]>b[i]){s[i]=s[i]+b[i];b[i]=s[i]-b[i];s[i]=s[i]-b[i];}
		shu[s[i]]++;
		i++;
	}
	for(i=1;i<=n;i++)
	{
		if(shu[i]%2==1)k++;
		if(shu[i]!=0&&shu[i]%2==0)g++;
	}
	if(shu[1]==n-1)fprintf(out,"%d",n/2);
	else
	{
		if(k==0)fprintf(out,"%d",g);
	    if(k!=0&&k<n-1)fprintf(out,"%d",k);
		if(k==n-1)fprintf(out,"%d",n/2);
	}
	fclose(in);
	fclose(out);
return 0;
}
