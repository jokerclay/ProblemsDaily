#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str.at(i)>=48&&str.at(i)<=57){
            count++;
        }
    }

    cout<<count;

    return 0;
}
