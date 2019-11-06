#pragma GCC optimize ("O3")
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
#include <set>
#include <map>
#include <cstring>
#include <stack>
#include <unordered_map>
#define lld long long int
#define dbg1(vari1) cerr<<#vari1<<" = "<<(vari1)<<endl;
#define dbg2(vari1,vari2) cerr<<#vari1<<" = "<<(vari1)<<" "<<#vari2<<" = "<<(vari2)<<endl;
#define dbg3(vari1,vari2,vari3) cerr<<#vari1<<" = "<<(vari1)<<" "<<#vari2<<" = "<<(vari2)<<" "<<#vari3<<" = "<<(vari3)<<endl;
using namespace std;
const int N = 1e5;
int link[N];
int size[N];
int find(int x)
{
	while(x!=link[x])
		x=link[x];
	return x;
}
bool same(int a, int b)
{
	return find(a)==find(b);
}
void unite(int a,int b)
{
	a=find(a);
	b=find(b);
	if(size[a]<size[b])
		swap(a,b);
	size[a]+=size[b];
	link[b]=a;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	//initialize link and size for the no
	//of number of nodes as specified in the question
	for(int i=1;i<=n;i++)
		link[i]=i;
	for(int i=1;i<=n;i++)
		size[i]=1;
}