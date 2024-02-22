#include<bits/stdc++.h>
using namespace std;

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

void merge1(int arr[], int l, int m, int r)
{

    int i, j,k;
    int n1 =(m-l)+1;
    int n2 = r-m;
    int L[n1], R[n2];
    for(i= 0; i<n1; i++)
        L[i] = arr[l+i];
    for(j= 0; j<n2; j++)
        R[j] = arr[m+1+j];
    i=0;
    j=0;
    k= l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]= L[i];
            i++;
        }
        else
        {
            arr[k]= R[j];
            j++;
        }
        k++;
    }

    while(i <n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j <n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int l, int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge1(arr,l,m,r);
    }
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

    print(a,n);
    merge_sort(a,0,n-1);
    print(a,n);
    return 0;
}
