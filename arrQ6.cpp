#include<iostream>
using namespace std;
 
int main()
{
    int a[4],b=0,c=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    for(int i=0;i<4;i++){
        if (b<a[i]){
            b=a[i];
        }

        if(c>a[i]){
            c=a[i];
        }
    }
    cout<<b<<endl<<c<<endl;
 
    return 0;
}