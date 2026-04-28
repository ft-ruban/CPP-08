#include "Span.hpp"

Span::Span(){
    N = 0;
}

Span::Span(unsigned int size_given): N(size_given){
}

Span::Span(const Span& other){
    this->N = other.N;
}

Span& Span::operator=(const Span& other){
    if(this!=&other){
        this->N = other.N;
        this->storage = other.storage;
    }
    return(*this);
}

Span::~Span(){

}

void Span::addNumber(unsigned int given_n){
    if(storage.size() == N)
        throw std::logic_error("Cannot add a number as size of our vector is already fulfilled");
    else
        storage.push_back(given_n);
}

unsigned int Span::shortestSpan(){
    std::vector<unsigned int>::iterator it;
    std::vector<unsigned int>::iterator next;
    unsigned int return_value = FIRST_ITERATION;

    if(storage.size() < 2)
        throw std::logic_error("Cannot compare a vector with less than 2 number.");
    else{
        std::sort(storage.begin(), storage.end());
        next = storage.begin() + 1;
        for(it = storage.begin(); it != storage.end() - 1; it++, next++){
            unsigned int buff = *next - *it;
            if (return_value > buff || return_value == FIRST_ITERATION){
                return_value = buff;
            }
        }
    }
    return(return_value);
}

unsigned int Span::longestSpan(){
    std::vector<unsigned int>::iterator it_begin;
    std::vector<unsigned int>::iterator it_end;

    if(storage.size() < 2)
        throw std::logic_error("Cannot compare a vector with less than 2 number.");

    std::sort(storage.begin(), storage.end());
    it_begin = storage.begin();
    it_end = storage.end() - 1;
    unsigned int return_value = *it_end - *it_begin;

    return(return_value);
}
