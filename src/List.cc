#include "List.hh"
#include<iostream>

List::List()
{
}

List::~List()
{
}

void List::AddFront(Book* book)
{
    Node* node{new Node(book)};
    if(IsEmpty())
    {
        head = node;
    }
    else
    {
        if(!tail)
        {
            tail = head;
            head = node;
            head->next = tail;
            tail->back = head;
        }
        else
        {
            node->next = head;
            head = node;
            head->next->back = head;
        }
        
    }
}
void List::AddBack(Book* book)
{
    Node* node{new Node(book)};
    if(IsEmpty())
    {
        tail = node;
    }
    else
    {
        if(!head)
        {
            head = tail;
            tail = node;
            tail->back = head;
            head->next = tail;
        }
        else
        {
            node->back = tail;
            tail = node;
            tail->back->next = tail;
        }
        
    }
}
void List::RemoveFront()
{

}
void List::RemoveBack()
{

}
Book* List::GetFront() const
{
    return head->book;
}
Book* List::GetBack() const
{
    return tail->book;
}
bool List::IsEmpty() const
{
    return !head && !tail;
}
void List::PrintFront()
{
    Node* temp = head;
    if(IsEmpty())
    {
        std::cout << "Lista vacia" << std::endl;
        return;
    }
    while (temp)
    {
        std::cout << "Nombre del libro: " << temp->book->GetName() << std::endl;
        std::cout << "Nombre del autor: " << temp->book->GetAuthor() << std::endl;
        std::cout << "Libro 1" << std::endl;
        temp = temp->next;
    }
}
void List::PrintBack()
{
    Node* temp = tail;
    if(IsEmpty())
    {
        std::cout << "Lista vacias" << std::endl;
    }
    while (temp)
    {
        std::cout << "Nombre del libro: " << temp->book->GetName() << std::endl;
        std::cout << "Nombre del autor: " << temp->book->GetAuthor() << std::endl;
        std::cout << std::endl;
        temp = temp->back;
    }
}