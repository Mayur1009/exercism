#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

std::size_t List::size() const {
    return current_size;
}

void List::push(int entry) {
    Element *d = new Element(entry);
    d->next = head;
    head = d;
    current_size++;
}

int List::pop() {
    int ret = head->data;
    Element *temp = head;
    head = head->next;
    delete temp;
    current_size--;
    return ret;
}

void List::reverse() {
    Element *prev = nullptr;
    Element *current = head;
    Element *next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

List::~List() {
    while (head != nullptr) {
        Element *temp = head;
        head = head->next;
        delete temp;
    }
}

}  // namespace simple_linked_list
