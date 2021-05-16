
#include "LinkedList.h"

LinkedList::LinkedList() {
   head = nullptr;
   tail = nullptr;

   // TODO
}

LinkedList::~LinkedList() {
}

int LinkedList::size() {
   int size = 0;
   Node* n = new Node(*head);

   while( n != nullptr && n->next != nullptr) {
      size++;
   }

   return size;
}

void LinkedList::clear() {

   while(head !=  nullptr && head->next != nullptr) {
      Node* n = head->next;
      delete head;
      head = n;
   }
}

void LinkedList::addFront(Tile* tile) {
   Node* front = new Node(tile, head);
   head = front;
}

void LinkedList::addBack(Tile* tile) {
   Node* back = new Node(tile,nullptr);
   if(tail == nullptr) {
      tail = back;
   } else {
      tail->next = back;
      back = tail;
   }
}
