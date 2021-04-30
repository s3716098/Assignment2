#include "LinkedList.h"

#include <iostream>
#include <string>

void testAddFront();
void testAddBack();

void testSize();
void testClear();

int main(void) {

}

void testAddFront() {
    // test adding to an empty list
    std::string msg = "";
    LinkedList* test = new LinkedList();
    Tile* t = new Tile();

    test->addFront(t);


    msg += test->size() == 0 ? "EMPTY LIST TEST: FAILED\n" : 
    "EMPTY LIST TEST: PASSED";

    delete test;
    delete t;
    

    // test with two nodes in list
    delete test;
    test = new LinkedList();

}

