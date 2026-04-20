#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void){
    std::cout<<"Hello World"<<std::endl;
    std::vector<int> myVector;
    std::list<int> myList;


    myList.push_back(42);
    myList.push_back(21);
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    myVector.push_back(42);
    //add_item(myVector, "4");
    try{
    std::vector<int>::iterator it = easyfind(myVector, 42);
    std::cout<<"vector found! : "<<*it<<std::endl;
    std::list<int>::iterator it_list = easyfind(myList, 21);
    std::cout<<"list found! : "<<*it_list<<std::endl;
    }
    catch (std::exception& e){
        std::cout << "An error has occurred: " << e.what();
    }
    return(0);
}