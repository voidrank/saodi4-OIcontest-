#ifdef unix
#define LLD "%lld"
#else
#define LLD "%I64d"
#endif

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
#define Maxn 1002013
#define Maxm
#define it vector<int>::iterator

using namespace std;

int N, sum;
vector<int> E[Maxn];
queue<int> Q;
int father[Maxn], In[Maxn];
bool leaf[Maxn];

void init()
{	
	scanf( "%d", &N );
	for ( int i = 1; i < N; ++i )
	{
		int x, y;
		scanf( "%d%d", &x, &y );
		E[x].pb(y); E[y].pb(x);
	}	
}

void work()
{
	Q.push( 1 );
	while ( Q.size() )
	{
		int x = Q.front(); Q.pop();
		for ( it i = E[x].begin(); i != E[x].end(); ++i )
		if ( father[x] != *i )
		{
			Q.push( *i );
			++In[x];
			father[*i] = x;
		}
		if ( x != 1&& E[x].size() == 1 )
		{
			leaf[x] = 1;
		}
	}
	
	for ( int i = 1; i <= N; ++i )
	if ( leaf[i] ) Q.push( i );
	
	while ( Q.size() )
	{
		int x = Q.front(); Q.pop();
		if ( !leaf[x] )
		{
			int size = 0;
			for ( it i = E[x].begin(); i != E[x].end(); ++i )
			if ( leaf[*i] ) ++size;
			sum += (size + 1)>>1;
		}
		--In[father[x]];
		if ( !In[father[x]] ) Q.push( father[x] );
	}
	cout<<sum;
}

int main(){
	freopen("cafetable.in","r",stdin);freopen("cafetable.out","w",stdout);

	init();
	work();
	
	fclose(stdin);fclose(stdout);
	return 0;
}