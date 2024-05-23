#include<bits/stdc++.h>
using namespace std;
int minf(int x, int y, int z )
{
    return min(x,min (y,z));

}

int editdis(string a, string b)
{
    int m,n,i,j;
    m= a.length();
    n= b.length();
    int dp[m+1][n+1];
    for(i=0; i<=m; i++)
    {
        for(j= 0; j<=n; j++)
        {

            if(i==0)
                dp[i][j]=j;
            else if (j==0)
                dp[i][j]=i;
            else if (a[i-1]==b[j-1])
                dp[i][j]= dp[i-1][j-1];

            else  dp[i][j]=1+ minf(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
        }
    }
    return dp[m][n];
}

int main()
{
    string a,b;
    getline(cin,a);
    getchar();
    getline(cin, b);
    cout<<"dis "<<editdis(a,b)<<endl;
    return 0;

}
