#include<stdio.h>
int main()
{int i,j,k=1,l=1,p[100]={0},q[100]={0};
	int m,n,a;
	float sum;
	FILE *in,*out;
	in=fopen("tree.in","r");
	out=fopen("tree.out","w");
	fscanf(in,"%d",&n);
     for(i=0;i<n;i++)
	 fscanf(in,"%d",&p[i]);
	for(i=0;i<n;i++)
	 fscanf(in,"%d",&q[i]);
	n--;
	for(i=1;;i++)
	{k=k*2;
		if(n<=k)
			break;
		else
			n=n-k;
	}
	fprintf(out,"%d.00",n);
	
	
	
	
	
	
	}