#include<iostream>
using namespace std;
 
int main()
{
    int a[4];
    for (int i=0;i<4;i++){
        cin>>a[i];
    }
    int b=0,c=1;
    for(int i=0;i<4;i++){
        b=b+a[i];
        c=c*a[i];
    }
    cout<<b<<endl<<c<<endl;
 
    return 0;
}