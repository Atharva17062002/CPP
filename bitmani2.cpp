#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return((n | (1<<pos))!=0);
}

int numberofones(int n){
    int count=0;
    while(n){
        n =n &(n-1);
        count++;
    }
    return count;
}
void subsets(int arr[],int n){
    for (int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
void unique2(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum = xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while (setbit!=1){
        setbit= xorsum&1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if (setBit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}
int main(){
    //cout<<numberofones(19)<<endl;
    int arr[]={1,2,3,1,2,3,5,7};
    //subsets(arr,4);
    //cout<<unique(arr,7)<<endl;
    unique2(arr,8);
    return 0;
}