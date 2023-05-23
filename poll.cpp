#include "poll.h"

Poll::Poll(std::string newQuestion, Answer newAnswer1, Answer newAnswer2, Answer newAnswer3)
{
    question = newQuestion;
    answer1 = newAnswer1;
    answer2 = newAnswer2;
    answer3 = newAnswer3;
}