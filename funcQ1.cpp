#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int circle(int x){
    float pi=3.14;
    float z= 2*x*pi;
    float y= pi*x*x;
    cout<<z<<endl;
    cout<<y<<endl;
}
 
int main(){
    int x;
    cin>>x;
    circle(x);
 
    return 0;
}