#include "Book.hh"

struct Node
{
    Book* book{};
    Node* next{};
    Node* back{};

    Node(Book* book)
    {
        this->book = book;
    }
};
