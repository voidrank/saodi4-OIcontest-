#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	freopen("success.in","r",stdin);
	freopen("success.out","w",stdout);
	double x,sum=0;
	long long n,i;
	cin>>x>>n;
	if(n<=20000){
		for(i=1;i<=n;i++)
	       sum+=pow(x,(double)i)/i;
	    printf("%.4lf\n",sum);
	}
	else printf("%.4lf\n",-log(1-x)-pow(x,(double)n+200));
	fclose(stdin);
	fclose(stdout);
	return 0;
}
