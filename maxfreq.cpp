#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str="aggfcfghg";
    int count[26];
    for (int i=0;i<26;i++){
        count[i]=0;
    }
    for(int i=0;i<str.size();i++){
        count[str[i]-'a']++;
    }
    char ans= 'a';
    int maxfreq=0;

    for (int i=0;i<26;i++){
        if(count[i]>maxfreq){
            maxfreq= count[i];
            ans = i+'a';
        }
    }
    cout<< maxfreq << " "<<ans<< endl;
}