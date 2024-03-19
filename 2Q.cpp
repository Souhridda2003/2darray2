#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows and column of first matrix: ";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);            
        }
    }
    for(int c=0;c<m;c++){
        int i=0;
        int j=m-1;
        while(i<j){
            swap(arr[i][c],arr[j][c]);
            i++;
            j--;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";            
        }
        cout<<endl;
    }
}