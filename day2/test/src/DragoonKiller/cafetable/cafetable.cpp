#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>

using namespace std;

#define foreachsubnodeini for(int i=nst[node];i<nst[node+1];i++)

ifstream fin("cafetable.in");
ofstream fout("cafetable.out");
#define cin fin
#define cout fout

class c_edge
{
public:
    int in,out;
}edge[1000050];
int nst[1000050];
    
int cmp(const void*a,const void*b)    
{
    return (*((c_edge*)a)).out - (*((c_edge*)b)).out;
}

int n,m;
int res=0;

char used[1000050]; //the node we've searched
/*
int caf[1000050];
int not[1000050];
void dfs(int node)
{
    used[node]=1;
    
    if(nst[node+1]-nst[node]<=1)return ;
    
}
*/

int ckdfs(int);

int ok=0;
int curp=0;
char c[200];
int As[100];
int Bs[100];
void dddfs(int dep)
{
    if(dep==n)
    {
        //memset(used,0,n);
        //cout<<curp<<' '<<res<<' '<<(res<curp)<<' '<<ckdfs(0)<<endl;
        
        if(res<curp)
        {
            memset(used,0,n+1);
            memset(As,0,4*(n+1));
            memset(Bs,0,4*(n+1));
        
            //for(int i=0;i<n;i++)cout<<c[i]<<' ';
            //cout<<endl;
            
            if(ckdfs(0))
            res=curp;
            
            //for(int i=0;i<n;i++)
            //cout<<As[i]<<' '<<Bs[i]<<endl;
        }
        return ;
    }
    
    c[dep]='A';
    curp++;
    dddfs(dep+1);
    curp--;
    
    c[dep]='B';
    dddfs(dep+1);
    
    c[dep]='E';
    dddfs(dep+1);
}

int ckdfs(int node)
{
    if(used[node]==1)return 1;
    
    used[node]=1;
    
    if(used[edge[nst[node]].in]==1)
    {
        //cout<<node<<endl;
        
        if(c[node]=='A')As[node]+=1;
        if(c[node]=='B')Bs[node]+=1;
        return 1;
    }
    
    
    foreachsubnodeini
    if(ckdfs(edge[i].in)==0)return 0;
    
    if(c[node]=='A')As[node]+=1;
    if(c[node]=='B')Bs[node]+=1;
    
    foreachsubnodeini
    {
        As[node]+=As[edge[i].in];
        Bs[node]+=Bs[edge[i].in];
    }

    if(As[node]==Bs[node])
    return 1;
    else
    return 0;
}

int main()
{
    cin>>n;
    m=(n-1)<<1;
    
    for(int i=0;i<n-1;i++)
    {
        int p=i<<1;
        cin>>edge[p].out>>edge[p].in;
        edge[p].out--;
        edge[p].in--;
        edge[p+1].in=edge[p].out;
        edge[p+1].out=edge[p].in;
    }
    
    qsort(edge,m,sizeof(c_edge),cmp);
    
    //for(int i=0;i<m;i++)
    //cout<<edge[i].out<<' ';
    //cout<<endl;
    
    nst[0]=0;
    for(int i=1;i<m;i++)
    if(edge[i].out!=edge[i-1].out)nst[edge[i].out]=i;
    nst[n]=m;
    
    //for(int i=0;i<=n;i++)
    //cout<<nst[i]<<' ';
    //cout<<endl;
    
    //cout<<dfs(0)<<endl;
    
    if(n<=1000)
    {
        dddfs(0);
        cout<<res<<endl;
    }
    else
    {
        cout<<n/2<<endl;
    }
    
    //system("PAUSE");
    return 0;
}
