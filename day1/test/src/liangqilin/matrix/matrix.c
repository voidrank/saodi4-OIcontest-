#include<stdio.h>
int main()
{int k=1,o,k1,k2,m=1000000009,i,l;
	int n,p,d;
	long int sum=0;
	FILE *in,*out;
	in=fopen("matrix.in","r");
	out=fopen("matrix.out","w");
    fscanf(in,"%d%d%d",&n,&p,&d);
	for(k=1;k<=n;k++)
	{k1=p+(k+k-2)*d;
     sum=sum+k1;
		  while(sum>=m)
		 {if(sum<i*m)
			 {i--;l=i*m;sum=sum-l;break;}
			 else
				 i++;
			 }
		}
		k2=p+(n-1)*d;
		i=2;
	    while(k2>=m)
		 {if(k2<i*m)
			 {i--;l=i*m;k2=k2-l;break;}
			 else
				 i++;
			 }
     sum=sum*k2;
		o=sum%m;
    fprintf(out,"%d",o);


}