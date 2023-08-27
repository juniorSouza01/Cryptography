#include<iostream>
#include<string>
using namespace std;

int main(){
    int i, j, k;
    string s, t;
    int key;

    cout<<"Insira a chave\n";
    cin>>key;
    cout<<"Insira a mensagem para a descriptação\n";
    cin>>s;
    for(i =0; i<s.size(); i++){
        t +=(s[i] - 'A' - key+ 26) %26 + 'A';
    }
    cout<<"\n\nA mensagem descriptografada é "<<t <<'\n';
    return 0;
}