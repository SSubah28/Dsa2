#include<bits/stdc++.h>
using namespace std;
int ks(int n ,int M, int w[],int  p[]){
int i, j;
int k[n+1][M+1];
for(j =0;j<=M;j++)
    k[0][j] =0;
for(i =0;i<=n;i++)
    k[i][0] =0;
    for(i = 1; i<=n;i++){
        for(j =1;j<=M;j++){
            if(w[i-1]<=j)
                k[i][j]= max(k[i-1][j],p[i-1]+k[i-1][j-w[i-1]]);
            else k[i][j]=k[i-1][j];

        }
    }
    return k[n][M];
}

int main(){
int  i,j,n,M;
cout<< "Items "<<endl;
cin>>n;
int w[n], p[n];
cout<<"W & P"<<endl;
for(i = 0; i<n;i++)
    cin>> w[i]>>p[i];
cout<<"capacitiy " <<endl;
cin>>M;
int result = ks(n,M,w,p);
cout<< "Max prof "<<result<<endl;
return 0;

}
