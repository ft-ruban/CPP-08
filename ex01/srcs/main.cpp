#include <iostream>
#include "Span.hpp"

//given subject test
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}


//test with 10000 determined numbers
// #include <iostream>

// int main()
// {
//     Span sp(10000);

//     for (int i = 0; i < 10000; ++i)
//         sp.addNumber(i);

//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;

//     return (0);
// }



////test with 10000 random numbers
// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// int main()
// {
//     Span sp(10000);

//     std::srand(std::time(NULL));

//     for (int i = 0; i < 10000; ++i)
//         sp.addNumber(std::rand());

//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;

//     return (0);
// }