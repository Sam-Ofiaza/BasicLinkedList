//
// Created by Sam on 10/13/2020.
//

#ifndef LINKED_LIST_SAMPLE_LINKEDLISTITEM_H
#define LINKED_LIST_SAMPLE_LINKEDLISTITEM_H

class LinkedListItem {
public:
    LinkedListItem(int v);
    LinkedListItem(const LinkedListItem &copy);
    LinkedListItem& operator=(const LinkedListItem &copy);
    ~LinkedListItem();

    int getItem();
    LinkedListItem* getNextItem();
    LinkedListItem* getPreviousItem();
    void setNextItem(LinkedListItem &n);
    void setPreviousItem(LinkedListItem &p);

private:
    int value;
    LinkedListItem *next;
    LinkedListItem *prev;
};

#endif //LINKED_LIST_SAMPLE_LINKEDLISTITEM_H
