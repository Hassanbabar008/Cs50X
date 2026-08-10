#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"please enter the size of pyramid(between 1 and 8): ";
    cin>>size;
    if((size>=1)&&(size<=8)){
        for(int i=0;i<size;i++){
            for(int j=size;j>i;j--){ //for left gap
                cout<<" ";
            }
            for(int k=0;k<=i;k++){ //for left triangle
                cout<<"#";
            }
            for(int l=0;l<2;l++){ //for the centre gap
                cout<<"  ";
            }
            for(int m=0;m<=i;m++){ //for right triangle
                cout<<"#";    
            }
            cout<<endl;
        }
    }
    else{
        cout<<"please enter correct value\n";
        return -1;
    }
}