#include<bits/stdc++.h>
using namespace std;
#define nV 4
const int INF =1e9;
void printMAtrix(int matrix[][nV]);
void floydwarshall(int graph[][nV]){
int matrix[nV][nV],i,j,k;
for(i =0;i<nV;i++)
    for(j=0;j<nV;j++)
    matrix[i][j]= graph[i][j];
for(k=0;k<nV;k++){
    for(i =0;i<nV;i++){
    for(j=0;j<nV;j++){
            if(matrix[i][k]+matrix[k][j]<matrix[i][j])
             matrix[i][j] = matrix[i][k]+matrix[k][j];
}
    }
}
printMAtrix( matrix);
}
void printMAtrix(int matrix[][nV]){
for(int i= 0;i<nV;i++){
    for(int j =0; j<nV;j++)
{
    cout<<matrix[i][j]<<"  " ;

}
cout<<endl;
}

}
void printMAtrix(int matrix[][nV]){
for(int i= 0;i<nV;i++){
    for(int j =0; j<nV;j++)
{
    cout<<matrix[i][j]<<"  " ;

}
cout<<endl;
}

}
void Avg(int matrix[][nV]){
for(int i= 0;i<nV;i++){
    for(int j =0; j<nV;j++)
{
 a = matrix1[0][j]

}
cout<<endl;
}

}

int main(){
int graph[nV][nV]={{0,3,INF,5},
{2,0,INF,4},
{INF,1,0,INF},
{INF,INF,2,0}
};
floydwarshall(graph);
}

