#include<iostream>
#include<math.h>
using namespace std;
bool prime(int x){
    int i;
    for (i=2;i<x;i++){
        if(i%x==0)
            cout<<"Not Prime"<<endl;
            return false;
            break;

    }
    if
    cout<<"Prime"<<endl;
    return true;

}
int main()
{
    int x;
    cinn>>x;
    prime(x);    
 
    return 0;
}