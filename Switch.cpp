#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Input a character: ";
    cin>>button;

    switch(button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Hola"<<endl;
        break;
    case 'c':
        cout<<"Namaste"<<endl;
        break;
    case 'd':
        cout<<"Ciao"<<endl;
        break;
     case 'e':
        cout<<"Salut"<<endl;
        break;
    default:
    cout<<"I am still learning"<<endl;
    }
    return 0;
}
