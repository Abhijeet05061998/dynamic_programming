#include<bits/stdc++.h>
using namespace std;

bool dp(int arr[],int n,int sum)
{
    bool t[n+1][sum+1];

    for(int i=0;i<sum;i++)
    {
        t[0][i]=false;
      
    }
    for(int i=0;i<n;i++)
    {
          t[i][0]=true;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]>j)
            {
                t[i][j]=t[i-1][j];
            }
            else
            {
                t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
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
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }

   if(dp(arr,n,sum))
   {
    cout<<"Yes"<<endl;
   }
   else
   {
    cout<<"No"<<endl;
   }

}