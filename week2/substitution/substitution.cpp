#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main(int argc,char** argv){
    if(argc!=2){
        cout<<"usage: ./substitution key\n";
        return 1;
    }
    if(strlen(argv[1])!= 26){
        cout<<"Enter 26 letters key\n";
        return 1;
    }
    string plain_text;
    int length=0,index;
    cout<<"please enter the text you want to cipher: "<<endl;
    getline(cin,plain_text);
    length=plain_text.length();
    for(int i=0;i<length;i++){
        if(isupper(plain_text[i])){
            index=plain_text[i]-'A';
            plain_text[i]=toupper(argv[1][index]);
        }
        if(islower(plain_text[i])){
            index=plain_text[i]-'a';
            plain_text[i]=tolower(argv[1][index]);
        }
    }
    cout<<"after ciphering: "<<plain_text<<endl;
}