#include<iostream>
#include<string>

using namespace std;

int POINTS[]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string );

int main(void){
    //get user input
    string p1, p2;
    cout<<"player 1: "; getline(cin,p1);
    cout<<"player 2: "; getline(cin,p2);

    //compute scores
    int score_of_p1=compute_score(p1);
    int score_of_p2=compute_score(p2);

    //find and display winner
    if(score_of_p1>score_of_p2){
        cout<<"player 1 wins. his scores: "<<score_of_p1<<"\nplayer 2's score: "<<score_of_p2<<endl;
    }
    else if(score_of_p2>score_of_p1){
        cout<<"player 2 wins. his scores: "<<score_of_p2<<"\nplayer 1's score: "<<score_of_p1<<endl;
    }
    else{
        cout<<"TIE\n";
    }
}

int compute_score(string word){
    int length=word.length(), score=0;

    for (int i=0;i<length;i++){
        if(isupper(word[i])){
            score+=POINTS[word[i]-'A'];
        }
        else if(islower(word[i])){
            score+=POINTS[word[i]-'a'];
        }
    }
    return score;
}