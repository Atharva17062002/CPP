#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==1){
        return a;
    }else{
        return (a*power(a,b-1));
    }
}
 
int main()
{
    int a,b;
    cin>>a>>b;
    cout<< power(a,b)<<"\n";
 
    return 0;
}