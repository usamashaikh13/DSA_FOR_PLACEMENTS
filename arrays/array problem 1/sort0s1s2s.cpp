#include<iostream>
using namespace std;
void sort012(int arr[], int n)
    {
        // code here 
        int one = 0;
        int twos = 0;
        int zeros = 0;

        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                zeros++;
            }
            else if(arr[i] == 1){
                one++;
            }
            else{
                twos++;
            }
        }

            int i = 0;
            while(zeros != 0){
                arr[i] = 0;
                i++;
            }
            while(one--){
                arr[i] = 1;
                i++;
            }
            while(twos--){
                arr[i] = 2;
                i++;
            }
        
        
        
    }

int main(){
 
    int n = 6;

    int arr[] = {2,2,1,0,0,0};

    sort012(arr,6);

    cout << "Array after sorting" <<endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;

}