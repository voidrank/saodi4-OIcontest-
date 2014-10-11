#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
#define ll long long
#define ld long double
#define pb push_back
#define ci const int&
#define inf 1000002012
#define Rep(i,n) for(int i=1;i<=n;++i)
#define rep(i,n) for(int i=0;i<n;++i)
#define Maxn 102013
#define Maxm

using namespace std;

int cnt, N = 50, M = 1000, Q = 50;
int first = 5;
int pos[Maxn], next[Maxn];
ld p[Maxn], sum;
char s[1000000],ch;

int main(){
	srand(time(0));
	while(1)
	{
		freopen("hmm.in","w",stdout);
		printf( "%d %d %d\n", N, M, Q );
		for ( int i = 0; i < N; ++i )	p[i] = rand();
		for ( int i = 0; i < N; ++i ) sum += p[i];
		for ( int i = 0; i < N; ++i ) printf( "%.4f ", (double)(p[i]/sum) );
		puts("");
		for ( int i = 0; i < N; ++i )
		{
			sum = 0;
			for ( int i = 0; i < Q; ++i )	p[i] = rand();
			for ( int i = 0; i < Q; ++i ) sum += p[i];
			for ( int i = 0; i < Q; ++i ) printf( "%.4f ", (double)(p[i]/sum) );
			puts("");
		}
		for ( int i = 0; i < N; ++i )
		{
			sum = 0;
			for ( int i = 0; i < N; ++i )	p[i] = rand();
			for ( int i = 0; i < N; ++i ) sum += p[i];
			for ( int i = 0; i < N; ++i ) printf( "%.4f ", (double)(p[i]/sum) );
			puts("");
		}
		fclose(stdout);
		return 0;
		system(".exe");system("_p.exe");
		freopen(".out","r",stdin);
		cnt = 0;
		while(scanf("%c",&ch)!=-1)s[cnt++]=ch;
		fclose(stdin);

		freopen("_p.out","r",stdin);
		for(int i = 0; i < cnt; ++i)
		{
			scanf( "%c", &ch);
			if( ch != s[i]) return 0;
		}
		fclose(stdin);
	}
	return 0;
}