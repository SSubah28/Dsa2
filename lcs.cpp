#include<bits/stdc++.h>
using namespace std;

int dis(string a, string b)
{
    int m,n,i,j;
    m= a.length();
    n= b.length();
    int l[m+1][n+1];
    for(i=0; i<=m; i++)
    {
        for(j= 0; j<=n; j++)
        {

            if(i==0)
                l[i][j]=0;
            else if (j==0)
                l[i][j]=0;
            else if (a[i-1]==b[j-1])
                l[i][j]= 1+l[i-1][j-1];

            else  l[i][j]= max(l[i][j-1],l[i-1][j]);
        }
    }
    return l[m][n];
}

int main()
{
    string a,b;
    getline(cin,a);
    getchar();
    getline(cin, b);
    cout<<"dis "<<dis(a,b)<<endl;
    return 0;

}

