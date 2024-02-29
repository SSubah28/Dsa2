#include<bits/stdc++.h>
using namespace std;
swp(int*a,int*b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partision(int arr[],int l, int h)
{
    int pivot = arr[h];
    int i = (l-1);
    for(int j = l; j<h; j++)
    {

        if(arr[j]<= pivot)
        {
            i++;
            swp(&arr[j],&arr[i]);
        }

    }
    swp(&arr[i+1],&arr[h]);
    return (i+1);
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

void quicks(int arr[], int l, int h)
{
    if(l<h)
    {
        int pi = partision(arr,l,h);
        quicks( arr,l, pi-1);
        quicks(arr,pi+1,h);
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
  int  l = 0;
  int   h = n-1;
    cout<<"Unsorted array "<<endl;
    print(a,n);
    quicks( a,  l,  h);
    cout<<"Sorted array "<<endl;
    print(a,n);

    return 0;
}
