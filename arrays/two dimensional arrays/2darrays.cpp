#include<iostream>
using namespace std;

bool isPresent(int arr[3][3], int target,int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col ; j++){
            if(arr[i][j] == target){
                return true;
            }
        }  
    }
    return false;
}

int main(){

    //creation
    int n = 9;
    int target = 13;
    int arr[3][3] = {5,1,3,4,5,1,10,9,11};

    //print entire 2D matrix
    cout << isPresent(arr,5,3,3)<<endl;
    
    

    return 0;
}