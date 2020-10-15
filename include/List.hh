#include "Node.hh"

class List
{
    private:
        Node* head{};
        Node* tail{};
    public:
        List();
        ~List();
        void AddFront(Book*);
        void AddBack(Book*);
        void RemoveFront();
        void RemoveBack();
        Book* GetFront() const;
        Book* GetBack() const;
        bool IsEmpty() const;
        void PrintFront();
        void PrintBack();
};
