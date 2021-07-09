#include<iostream>
using namespace std;
 
int table(int x, int y){
    for (int i=1;i<=y;i++){

    cout<<x<<"*"<<i<<"="<<x*i<<endl;
    }
    return 0;
} 
int main()
{
    int x,y;
    cin>>x>>y;
    table(x,y);
    return 0;
}