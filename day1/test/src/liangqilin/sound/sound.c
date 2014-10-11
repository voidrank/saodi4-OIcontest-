#include<stdio.h>
int main()
{int i,j,k=1,l=1,o,k1,k2;
	int m,n,a;
	FILE *in,*out;
	in=fopen("sound.in","r");
	out=fopen("sound.out","w");
	fscanf(in,"%d%d",&n,&m);
	for(i=0;i<m;i++)
	{l=l*2;}
	while(k<=n)
	{fscanf(in,"%d",&a);
		for(j=0;;j++)
		{o=j+1;
			if(j*l<a&&o*l>a)
				break;
				}
		k1=j*l-a;
		k1=k1*-1;
		k2=o*l-a;	
		if(k1>=k2)
		{k2=k2+a;
			fprintf(out,"%I64d ",k2);
			}
			else
			{k1=j*l;fprintf(out,"%I64d ",k1);}
		k++;
			}		
	
	
	
	}
