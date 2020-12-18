#include<bits/stdc++.h>
using namespace std;
int coin_change(int coin[],int n,int sum)
{
	int t[n+1][sum+1];
	for(int i=0;i<=sum;i++)
	{
		t[0][i]=0;
	}
	for(int i=0;i<=n;i++)
	{
		t[i][0]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			t[i][j]=t[i-1][j];
			if(coin[i-1]<=j)
			{
				t[i][j]=t[i][j-coin[i-1]]+t[i-1][j];
			}
		}
	}
	return t[n][sum];
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
	int n,sum;
	cin>>n>>sum;
	int *coin=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>coin[i];
	}

	cout<<coin_change(coin,n,sum);
}