#include<bits/stdc++.h>
using namespace std;


int lis(int arr[],int n)
{
	int*dp=new int[n];
	dp[0]=1;
	for(int i=1;i<n;i++)
	{
		dp[i]=1;
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j])
			{
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}

	int ans=dp[0];
	for(int i=1;i<n;i++)
	{
		ans=max(dp[i],ans);
	}
	return ans;
}
int main()
{

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif



	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<lis(arr,n);
}