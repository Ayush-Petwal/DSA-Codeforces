#include <bits/stdc++.h>
using namespace std;
const int N = 1e2+10;
int t,n,m,a[N][N];
int p[4]={1,-1,0,0};
int q[4]={0,0,1,-1};
int bfs(int x,int y)
{
	int o=0;
	for(int i=0;i<4;i++)
	{
		if(x+p[i]>n||x+p[i]<1||y+q[i]>m||y+q[i]<1)continue;
		o=max(o,a[x+p[i]][y+q[i]]);
	}
	return o;
}
int find()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]>a[i+1][j]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i][j-1])
			{
				a[i][j]=bfs(i,j);
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof a);
		cin>>n>>m;
		for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>a[i][j];
		while(find()){}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
 	return 0;
}