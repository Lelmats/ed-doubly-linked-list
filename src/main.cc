#include<iostream>
#include "List.hh"

int main()
{
    List* list{new List()};

    //std::cout << "hello list" << std::endl;

    list->PrintBack();
    list->PrintFront();

    std::cin.get();

    return 0;
}