#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of first matrix: ";
    cin>>m;
    int n;
    cout<<"enter cols of 2nd matrix: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((i+j)%2!=0){
                cout<<" "<<" ";
            }
            else cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}