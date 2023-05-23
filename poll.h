#ifndef POLL_H
#define POLL_H
#include <string>
#include "answer.h"

class Poll
{
    private:
    std::string question;
    Answer answer1;
    Answer answer2;
    Answer answer3;
    public:
    Poll(std::string newQuestion, Answer newAnswer1, Answer newAnswer2, Answer newAnswer3);
};

#endif