#include <iostream>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

float avg_letters_cal(string);
float avg_sentences_cal(string);

int total_words = 0;

int main(void)
{
    // Get user's input
    string paragraph;
    float index, avg_letters, avg_sentences;
    cout << "Please enter your paragraph: \n";
    getline(cin, paragraph);

    avg_letters = avg_letters_cal(paragraph);
    avg_sentences = avg_sentences_cal(paragraph);

    index = round((0.0588*avg_letters)-(0.296*avg_sentences)-15.8);
    if (index >= 16)
    {
        cout << "Grade 16+" << endl;
    }
    else if (index < 1)
    {
        cout << "Before Grade 1" << endl;
    }
    else
    {
        cout << "Grade " << index << endl;
    }
}

// Calculate average number of letters per 100 words
float avg_letters_cal(string paragraph)
{
    int length_para = paragraph.length();
    int letters = 0;
    for (int i = 0; i < length_para; i++)
    {
        if (isalpha(paragraph[i]))
        {
            letters++;
        }
    }
    total_words = 1;
    for (int i = 0; i < length_para; i++)
    {
        if (paragraph[i] == ' ')
        {
            total_words++;
        }
    }
    float avg_letters = ((float)letters / total_words) * 100;
    return avg_letters;
}

// Calculate average number of sentences per 100 words
float avg_sentences_cal(string paragraph)
{
    int length_para = paragraph.length();
    int sentences = 0;
    for (int i = 0; i < length_para; i++)
    {
        if ((paragraph[i] == '.')||(paragraph[i] == '!')||(paragraph[i] == '?'))
        {
            sentences++;
        }
    }
    float avg_sentences = ((float)sentences / total_words) * 100;
    return avg_sentences;
}