#include<bits/stdc++.h>
using namespace std;

int LIS_sum(int arr[],int n)
{
    int*dp=new int[n];

    for(int i=0;i<n;i++)
    {
    	dp[i]=arr[i];
    	for(int j=0;j<i;j++)
    	{
    		if(arr[i]>arr[j])
    		{
    			dp[i]=max(dp[i],dp[i]+arr[j]);
    		}
    	}
    }
    int ans;
    ans=dp[0];
    for(int i=1;i<n;i++)
    {
    	ans=max(ans,dp[i]);
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

	cout<<LIS_sum(arr,n);
}