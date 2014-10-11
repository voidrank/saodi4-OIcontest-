#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("sound.in","r",stdin);
	freopen("sound.out","w",stdout);
	int a[1000],m,n;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	long q=pow(2,m);
	for(int i=0;i<n;i++){
		int k=0;
		while(k*q>a[i]||a[i]>(k+1)*q)k++;
		if(fabs(k*q-a[i])>=fabs((k+1)*q-a[i]))a[i]=(k+1)*q;
		else a[i]=k*q;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
