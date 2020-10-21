#include<iostream>
#include "List.hh"

int main()
{
    List* list{new List()};

    //std::cout << "hello list" << std::endl;
    list->AddFront(new Book("libro 1", "autor 1"));

    list->PrintBack();
    list->PrintFront();

    std::cin.get();

    return 0;
}