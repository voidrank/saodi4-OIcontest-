#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<climits>
#define cin fin
#define cout fout
using namespace std;

/*******类********/
struct edge
{
	int a;
	int b;
};

/*******变量********/
ifstream fin("cafetable.in");
ofstream fout("cafetable.out");
edge map[30000];
int t[30000]={0};	//前向星中每个节点边开始的位置
int father[30000]={-1};  //每个节点的父节点，根节点为-1
int n;
int m;

/*******函数声明********/
int cmp(const void* a,const void* b);
void getFather(int f,int now,int add);
int cafe(int k,int& rest);
/*******主函数********/
int main()
{
	cin>>n;
	m=2*(n-1); //边数
	
	//读入边（双向）
	for(int i=0;i<n-1;i++)
	{
		cin>>map[2*i].a>>map[2*i].b;
		map[2*i+1].a=--map[2*i].b;	//节点从1开始
		map[2*i+1].b=--map[2*i].a;
	}
	
	//前向星排序
	qsort(map,m,sizeof(edge),cmp);
	
	//读取头
	for(int i=1;i<m;i++)
		if(map[i].a!=map[i-1].a&&t[map[i].a]==0)
			t[map[i].a]=i;
	t[n]=m;
	
	for(int i=0;i<t[1];i++)
		getFather(0,map[i].b,i);	//读取每个点的父亲，并把连向父亲的边删除
	
	
	//删掉father后再次排序……
	qsort(map,2*(n-1),sizeof(edge),cmp);
	
	for(int i=0;i<n;i++)
		t[i]=0;
	//读取头
	for(int i=1;i<m;i++)
		if(map[i].a!=map[i-1].a&&t[map[i].a]==0)
			t[map[i].a]=i;
	t[n]=m;
	for(int i=1;i<n;i++)
	{
		if(t[i]==0)
			t[i]=INT_MAX;		//如果t[i]没有读，说明是叶节点
	}
	
	int k;
	cout<<cafe(0,k);
	
	
	
	fin.close();
	fout.close();
	return 0;
}

/*******子函数********/
int cmp(const void* a,const void* b)
{
	return ((((edge*)a)->a)-(((edge*)b)->a));
}

void getFather(int f,int now,int add)
{
	if(father[f]==now)
	{
		map[add].a=map[add].b=INT_MAX;
		m--;
	}
	else
	{
		father[now]=f;
		for(int i=t[now];i<t[now+1];i++)
			getFather(now,map[i].b,i);
	}
}

int cafe(int k,int& rest)
{
	if(t[k]==INT_MAX)
	{
		rest=1;
		cout<<"rest: "<<1<<" out"<<endl;
		return 0;
	}
	int r=0;
	int sumr=0;
	int sumc=0;
	
	int nextedge;
	for(int i=k+1;i<=n;i++)
		if(t[i]!=INT_MAX)
		{
			nextedge=t[i];
			break;
		}
	for(int i=t[k];i<nextedge;i++)
	{
		cout<<"from "<<k<<" in:"<<endl;
		sumc+=cafe(map[i].b,r);
		sumr+=r;
	}
	
	sumr++;
	if(sumr>=2)
		sumc+=sumr/2;
	//sumr%=2;
	sumr=0;
	rest=sumr;
	
	/***test***/
	cout<<"k:"<<k<<" rest:"<<sumr<<" sum: "<<sumc<<endl;
	cout<<"out"<<endl;
	
	return sumc;
}

//结束
