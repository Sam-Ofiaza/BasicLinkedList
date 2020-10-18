//
// Created by Sam on 10/13/2020.
//

#ifndef LINKED_LIST_SAMPLE_LINKEDLIST_H
#define LINKED_LIST_SAMPLE_LINKEDLIST_H

#include "LinkedList.h"
using namespace std;

class LinkedList {
public:
    LinkedList();

    int getLength();
    void printList();
    void printListBackwards();

    void addItemToFront(LinkedListItem *item);
    void addItemAt(int index, LinkedListItem *item);
    void addItemToBack(LinkedListItem *item);

    LinkedListItem* removeFirstItem();
    LinkedListItem* removeItemAt(int index);
    LinkedListItem* removeLastItem();

    LinkedListItem* getFirstItem();
    LinkedListItem* getItemAt(int index);
    LinkedListItem* getLastItem();

private:
    LinkedListItem *head;
    LinkedListItem *tail;
    int length;
};

#endif //LINKED_LIST_SAMPLE_LINKEDLIST_H
