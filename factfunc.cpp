#include<iostream>
#include<math.h>
using namespace std;
float circle(int r){
    float area = 3.14*r*r;
    float circumference = 3.14*2*r;
    cout<<area<<endl;
    cout<<circumference<<endl;

   
}
int main(){
    int a;
    cin >> a;
    cout << circle(a)<< endl;
    return 0;
}