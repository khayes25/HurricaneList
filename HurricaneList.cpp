#include <iostream>

using namespace std;

/**
 * Node object to represent each place in the linked list.
 * Contains one Storm value of s.
 * Contains a pointer to the next node in the list.
 */
struct Node {
    Storm s; //The value stored in the node
    Node *next; //Pointer to the next node in the list.
    Node *previous //Pointer to the previous node in the list.
};