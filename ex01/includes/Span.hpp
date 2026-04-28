#include <vector>
#include <iostream>
#include <algorithm>

#define FIRST_ITERATION 0

class Span{
    public:
        Span();
        Span(unsigned int size_given);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(unsigned int given_n);
        unsigned int shortestSpan();
        unsigned int longestSpan();


    private:
        unsigned int N;
        std::vector<unsigned int> storage;
};
