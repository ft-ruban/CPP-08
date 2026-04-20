#include <iostream>
#include <map>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& list_container, int i){
    
    typename T::iterator it = std::find(list_container.begin(), list_container.end(), i);
    
    if(it == list_container.end())
        throw std::runtime_error("couldnt find the value");

    return(it);
}