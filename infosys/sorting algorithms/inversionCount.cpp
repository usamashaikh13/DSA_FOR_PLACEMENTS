#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &array, int s, int e){
    int i = s;
    int m = (s+e)/2;
    int j = m + 1;

    vector<int> temp;

    int cnt = 0;

    while(i <= m && j<=e){
        if(array[i] < array[j]){
            temp.push_back(array[i]);
            i++;
        }
        else{
            cnt += (m - i + 1);
            temp.push_back(array[j]);
            j++;
        }
    }
    //copy remaining elements from array
    while(i<=m){
        temp.push_back(array[i++]);
    }
    //or copy rem elements from second array
    while(j<=e){
        temp.push_back(array[j++]);
    }

    //copy back the elements from temp to orginal array
    int k = 0;
    for(int idx = s; idx<=e; idx++){
        array[idx] = temp[k++];
    }
    return cnt;


}
int inversion_count(vector<int> &arr, int s, int e){
    //base case
    if(s>=e){
        return 0;
    }
    //rec case
    int mid = (s+e)/2;
    //sorting left part
    int c1 = inversion_count(arr,s,mid);
    int c2 = inversion_count(arr,mid+1,e);
    int cI = merge(arr,s,e);
    return c1 + c2 + cI;
}
int main(){

    vector<int> arr{0,5,2,3,1};
    
    int s = 0; 
    int e = arr.size()-1;
    cout << inversion_count(arr,s,e) <<endl;
    
    return 0;

}