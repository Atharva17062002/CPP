#include <iostream>
#include <cmath>
using namespace std;

void sort(int n,int a[]){
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int count=0;
            if (a[j]>a[j+1]){
                int temp;
                temp= a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
                count++;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(n,a[]);
    cout<<"Array is sorted in "<<cnt<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[a.size()-1]<<endl;
}