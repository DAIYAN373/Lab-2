#include <iostream>
using namespace std;

/* ---------- Node Structure ---------- */
struct node
{
    int data;
    node *prev;
    node *next;
};

node *head = NULL;

/* ---------- INSERT AT FIRST ---------- */
void insertAtFirst(int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

/* ---------- INSERT AT LAST ---------- */
void insertAtLast(int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

/* ---------- INSERT AT ANY POSITION ---------- */
void insertAtPosition(int value, int pos)
{
    if (pos == 1)
    {
        insertAtFirst(value);
        return;
    }

    node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        cout << "Invalid Position\n";
        return;
    }

    node *newNode = new node;
    newNode->data = value;
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

/* ---------- DELETE AT FIRST ---------- */
void deleteAtFirst()
{
    if (head == NULL)
    {
        cout << "List is Empty\n";
        return;
    }

    node *temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    delete temp;
}

/* ---------- DELETE AT LAST ---------- */
void deleteAtLast()
{
    if (head == NULL)
    {
        cout << "List is Empty\n";
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    if (temp->prev != NULL)
        temp->prev->next = NULL;
    else
        head = NULL;

    delete temp;
}

/* ---------- DELETE AT ANY POSITION ---------- */
void deleteAtPosition(int pos)
{
    if (head == NULL)
    {
        cout << "List is Empty\n";
        return;
    }

    if (pos == 1)
    {
        deleteAtFirst();
        return;
    }

    node *temp = head;
    for (int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        cout << "Invalid Position\n";
        return;
    }

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    delete temp;
}

/* ---------- SEARCH ---------- */
void search(int key)
{
    node *temp = head;
    int pos = 1;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << "Element found at position " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }

    cout << "Element not found\n";
}

/* ---------- TRAVERSING ---------- */
void traverse()
{
    node *temp = head;
    cout << "List: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

/* ---------- MAIN ---------- */
int main()
{
    insertAtFirst(10);
    insertAtLast(20);
    insertAtLast(30);
    insertAtPosition(15, 2);

    traverse();

    deleteAtFirst();
    traverse();

    deleteAtLast();
    traverse();

    search(20);

    return 0;
}

