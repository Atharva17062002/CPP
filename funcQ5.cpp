#include<iostream>
using namespace std;
int factorial(int x){
    int y=1;
    if (x==0|x==1){
        cout<<y<<endl;
    }
    for(int i=1;i<=x;i++){
        y=y*i;
    }
    cout<<y<<endl; 
}
 
int main()
{   
    int x;
    cin>>x;
    factorial(x);
 
    return 0;
}