
#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    int checksum = 0, addition = 0;
    cout << "Enter card number(without hyphens): ";
    cin >> num;
    int size = num.length();
    //digits that are multiplied by 2
    for (int i = size - 2; i >= 0; i -= 2) {
        //num[i] is a character, so subtract '0' to convert it into an integer.
        checksum = 2 * (num[i] - '0');
        if (checksum / 10 != 0) {
            int mod = checksum % 10;
            int rest = checksum / 10;
            addition += mod + rest;
        }
        else {
            addition += checksum;
        }
        //cout << "checksum: " << checksum << endl;
    }
    //digits that were NOT multiplied by 2
    for (int i = size - 1; i >= 0; i -= 2) {
        int nom = num[i] - '0';
        addition += nom;
        //cout << "Num that wasn't multiplied: "<< nom << endl;
    }
    cout << "addition: " << addition << endl;
    if(addition % 10 == 0){
        cout<<"valid"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }
    return 0;
}