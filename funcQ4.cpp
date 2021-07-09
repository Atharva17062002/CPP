#include<iostream>
#include<math.h>
using namespace std;

int grade(int x){
    if (91<=x&&x<=100){
        cout<<"Grade: AA"<<endl;
    }
    else if (81<=x&&x<=90){
        cout<<"Grade: AB"<<endl;
    }
    else if (71<=x&&x<=80){
        cout<<"Grade: BB"<<endl;
    }
    else if (61<=x&& x<=70){
        cout<<"Grade: BC"<<endl;
    }
    else if (51<=x&&x<=60){
        cout<<"Grade: CC"<<endl;
    }
    else if (41<=x&&x<=50){
        cout<<"Grade: CD"<<endl;
    }
    else if (x<41){
        cout<<"Fail"<<endl;
    }
}
int main(){
    int x;
    cin>>x;
    grade(x);
}