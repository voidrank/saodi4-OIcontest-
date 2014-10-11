#include<stdio.h>
int main()
{long long n,i=1,j;
  float x;
  double sum=0,a=1;
  FILE *in,*out;
 
 in=fopen("success.in","r");
 fscanf(in,"%f%I64d",&x,&n);
 fclose(in);

 if(x<=0.998&&n>5000)
	 n=5000;
 if(x>0.998&&x<=0.999&&n>10000)
	 n=10000;
 
 for(;i<=n;i++)
   {for(j=1;j<=i;j++)
	    a*=x;
	 a=a/i;
	 sum+=a;
	 a=1;
   }

 out=fopen("success.out","w");
 fprintf(out,"%.4f",sum);
 fclose(out);

 return 0;
}
