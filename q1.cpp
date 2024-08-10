#include<iostream>
#include<vector>
using namespace std;

int main(){
int rows;
cout<<"Enter rows"<<endl;
cin>>rows;
int cols;
cout<<"Enter cols"<<endl;
cin>>cols;

vector<vector<int>>matrix(rows,vector<int>(cols));
vector<vector<int>>result(cols,vector<int>(rows));

cout<<"Enter values in matrix"<<endl;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>matrix[i][j];
    }
}
for(int j=0;j<cols;j++){
    for(int i=0;i<rows;i++){
        result[j][i]=matrix[i][j];
    }
}
cout<<"The determinant of the matrix is "<<endl;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
