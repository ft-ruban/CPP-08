#include <iostream>
#include "easyfind.hpp"
#include <vector>
int main(void){
    std::cout<<"Hello World"<<std::endl;
    std::vector<int> myVector;

    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    myVector.push_back(42);
    //add_item(myVector, "4");



    

    // easyfind<std::map<int, std::string> >(m, 4);
    try{
    std::vector<int>::iterator it = easyfind(myVector, 42);
    std::cout<<"found! : "<<*it<<std::endl;
    }
    catch (std::exception& e){
        std::cout << "An error has occurred: " << e.what();
    }
    return(0);
}