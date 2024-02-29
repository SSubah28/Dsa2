#include<bits/stdc++.h>
using namespace std;

void cnts(int arr[],int n)
{
    int out[n],i;
    int m = arr[0];
            for(int i = 0; i<n; i++)
    {

        if(arr[i]>= m)
        {
            m = arr[i];
        }

    }
    int cnt[m+1];

    for(int i = 0; i<=m; i++)
    {
        cnt[i]=0;

    }
    for(int i = 0; i<n; i++)
    {
        cnt[arr[i]]++;

    }
     for(int i =1; i<m+1; i++)
    {
        cnt[i]+=cnt[i-1];

    }
for(int i =n-1; i>=0; i--)
    {
        out[cnt[arr[i]]-1]= arr[i];
        cnt[arr[i]]--;

    }
    for(int i =0; i<n; i++)
    {
        arr[i] = out[i];

    }




}

void print(int a[],int s)
{
    int i;
    cout<<s<<" size "<<endl;
    for(i=0; i<s; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int n,i;
    cout<<"Size ";
    cin>>n;

    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Unsorted array "<<endl;
    print(a,n);
    cnts( a,n);
    cout<<"Sorted array "<<endl;
    print(a,n);

    return 0;
}

