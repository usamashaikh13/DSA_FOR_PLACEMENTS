#include <iostream>
using namespace std;

void rowSum(int arr[4][2],int row, int col){

    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum = sum + arr[i][j];
        }
        cout <<"Sum" <<" ";
    }
    cout<<endl;
}

int main(){

    int row = 4;
    int col = 2;


    int arr[] = {(1,2),(3,4),(5,6),(7,8)};

    rowSum(arr,row,col);

    return 0;
}