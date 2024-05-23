#include<bits/stdc++.h>
using namespace std;

int edit(int c[],int n, int s)
{

    int dp[n+1][s+1],i,j;
    for(i=0; i<=n; i++)
    {
        for(j= 0; j<=s; j++)
        {
            dp[i][j]=0;
        }
    }
    dp[0][0]=1;

    for(i=1; i<=n; i++)
    {
        for(j= 0; j<=s; j++)
        {
            dp[i][j]+=dp[i-1][j];
            if(j-c[i-1]>=0)
                dp[i][j]+= dp[i][j-c[i-1]];

        }
    }


    return dp[n][s];
}

int main()
{
    int n,s;

        cin>>n>>s;
    int c[n];


     cout<<" n "<<n<< " s "<<s<<endl;
    for(int i=0;i<n;i++)
            cin>>c[i];
             cout<<"coin values "<<endl;
             for(int i=0;i<n;i++)
          cout<<c[i]<<" ";

          cout<<endl;

    cout<<"coin exchange "<<edit(c,n,s)<<endl;
    return 0;

}

