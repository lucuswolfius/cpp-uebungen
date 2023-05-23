#ifndef ANSWER_H
#define ANSWER_H
#include <string>
#include "poll.h"

class Answer
{
    private:
    std::string answer = "";
    int votes = 0;

    public:
    friend class Poll;
    Answer();
    Answer(std::string newAnswer, int voteAmount);
    void get_answer();
    void get_vote();
};

#endif