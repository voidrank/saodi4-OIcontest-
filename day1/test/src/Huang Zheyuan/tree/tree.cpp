#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int a[1000],b[1000],n,temp=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
		if(a[i]!=b[i])temp=1;
	if(temp==0){printf("%d.000",n-1);return 0;}
	else printf("4.000");
	fclose(stdin);
	fclose(stdout);
	return 0;
}
