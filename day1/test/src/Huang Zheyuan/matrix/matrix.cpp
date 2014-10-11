#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	long long n,p,d,i,sum=0;
	cin>>n>>p>>d;
	for(i=1;i<=n;i++)
		sum+=((p+(i+i-2)*d)*(p+(n-1)*d))%1000000009;
	printf("%lld",sum%1000000009);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
