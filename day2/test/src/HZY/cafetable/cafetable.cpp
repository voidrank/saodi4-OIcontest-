#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("cafetable.in","r",stdin);
	freopen("cafetable.out","w",stdout);
	int n,a[1000][2];
	cin>>n;
	for(int i=0;i<n-1;i++)
	   cin>>a[i][0]>>a[i][1];
	cout<<n/2<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
