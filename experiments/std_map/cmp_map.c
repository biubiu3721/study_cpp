#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long LL;
const int INF=0x3f3f3f3f;
pair<int,int>pa[100];
int cmp(pair<int,int>a,pair<int,int>b){
    if(a.first!=b.first)
        return a.first>b.first;
    else
        return a.second<b.second;
}
int main(){
    int a,b;
    for(int i=0;i<5;i++)scanf("%d%d",&a,&b),pa[i]=make_pair(a,b);
    sort(pa,pa+5,cmp);
    for(int i=0;i<5;i++)printf("%d %d\n",pa[i].first,pa[i].second);
    return 0;
}