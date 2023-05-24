#ifndef ANSWER_H
#define ANSWER_H
#include <string>
#include "poll.h"

class Answer
{
    private:
    std::string answer;
    int votes;

    public:
    friend class Poll;
    Answer();
    Answer(std::string newAnswer);
    void get_answer();
    void get_vote();
};

#endif