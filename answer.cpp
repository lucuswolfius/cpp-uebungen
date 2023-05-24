#include "answer.h"
#include <iostream>
#include <string>

using namespace std;

Answer::Answer()
{
    answer = "";
    votes = 0;
}
Answer::Answer(string newAnswer)
{
    answer = newAnswer;
}
void Answer::get_answer()
{
    cout << "Enter your answer: ";
    getline(cin, answer);
}
void Answer::get_vote()
{
    char c;
    cout << "Do you want to vote for that answer? (y/n): ";
    cin >> c;

    if (c == 'y' || c == 'Y')
    {
        votes++;
    }
}