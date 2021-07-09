#include<iostream>
using namespace std;
int max(int a, int b, int c){
    int x=a;
    if (x<b){
        x=b;
        if (x<c){
            x=c;
        }
    }
    else if (x<c){
        x=c;
    }
    else; 
        cout<<x<<endl;
    return 0;
}
 int min(int a, int b, int c){
    int x=a;
    if (x>b){
        x=b;
        if (x>c){
            x=c;
        }
    }
    else if (x>c){
        x=c;
    }
    else; 
        cout<<x<<endl;
    return 0;
}
 
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   max(a,b,c); 
   min(a,b,c);
 
    return 0;
}