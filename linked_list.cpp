#include <iostream>
using namespace std;
struct Node {
    struct Node *previous;
    int data;
    struct Node *next;
    
};
struct Node* head1 = NULL;
struct Node* head2 = NULL;
void insert(int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head1;
    new_node->previous = head2;
    head1 = new_node;
    head2 = new_node;
}
void display()
{
    struct Node* ptr;
    ptr = head1;
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }
}
int main()
{
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout<<"The linked list is: ";
    display();
    return 0;
}
