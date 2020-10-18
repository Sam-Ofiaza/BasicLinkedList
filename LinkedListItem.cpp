//
// Created by Sam on 10/13/2020.
//

#include "LinkedListItem.h"

LinkedListItem::LinkedListItem(int v) {
    value = v;
    next = nullptr;
    prev = nullptr;
}

LinkedListItem::LinkedListItem(const LinkedListItem &copy) {
    value = copy.value;
    next = copy.next;
    prev = copy.prev;
}

LinkedListItem& LinkedListItem::operator=(const LinkedListItem &copy) {
    if(this == &copy)
        return *this;
    value = copy.value;
    next = copy.next;
    prev = copy.prev;

    return *this;
}

void LinkedListItem::~LinkedListItem() {
    delete next;
    delete prev;
    next = nullptr;
    prev = nullptr;
}

int LinkedListItem::getItem() {
    return 0;
}

LinkedListItem* LinkedListItem::getNextItem() {
    return next;
}

LinkedListItem* LinkedListItem::getPreviousItem() {
    return prev;
}

void LinkedListItem::setNextItem(LinkedListItem &n) {
    next = &n;
}

void LinkedListItem::setPreviousItem(LinkedListItem &p) {
    prev = &p;
}
