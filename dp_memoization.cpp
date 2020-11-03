#include<bits/stdc++.h>
using namespace std;

int arr[1000];

int fact(int n)
{
	
	
    if(arr[n]==-1)
    {
    	int ans;
    	if(n==1||n==0)
    	{
    		return n;
    	}
    	else
    	{
    		ans=fact(n-1)+fact(n-2);
    	}
    	arr[n]=ans;
    }
    return arr[n];
 }


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	
	memset(arr,-1,sizeof(arr));
	cout<<fact(n);
	
}