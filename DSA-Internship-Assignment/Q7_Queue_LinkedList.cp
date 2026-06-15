#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int value)
{
    Node* newNode = new Node(value);

    if(rear == NULL)
    {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

void dequeue()
{
    if(front == NULL)
    {
        cout << "Queue Underflow\n";
        return;
    }

    Node* temp = front;

    cout << "Deleted Element: " << front->data << endl;

    front = front->next;

    if(front == NULL)
        rear = NULL;

    delete temp;
}

void display()
{
    if(front == NULL)
    {
        cout << "Queue is Empty\n";
        return;
    }

    Node* temp = front;

    cout << "Queue Elements: ";

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}