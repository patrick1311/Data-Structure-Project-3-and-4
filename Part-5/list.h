//
//  list.h
//  Sparse Matrix
//
//  Created by Patrick Quach on 5/11/17.
//  Copyright © 2017 Patrick Quach. All rights reserved.
//

#ifndef list_h
#define list_h


const int defaultSize = 10;

template <typename E> class List { // List ADT
private:
    void operator =(const List&) {}      // Protect assignment
    List(const List&) {}           // Protect copy constructor
public:
    List() {}          // Default constructor
    virtual ~List() {} // Base destructor
    
    // Clear contents from the list, to make it empty.
    virtual void clear() = 0;
    
    // Insert an element at the current location.
    // item: The element to be inserted
    virtual void insert(const E& item) = 0;
    
    // Append an element at the end of the list.
    // item: The element to be appended.
   // virtual void append(const E& item) = 0;
    
    // Remove and return the current element.
    // Return: the element that was removed.
    virtual E remove() = 0;
    
    // Set the current position to the start of the list
    virtual void moveToStart() = 0;
    
    // Set the current position to the end of the list
    virtual void moveToEnd() = 0;
    
    // Move the current position one step left. No change
    // if already at beginning.
    virtual void prev() = 0;
    
    // Move the current position one step right. No change
    // if already at end.
    virtual void next() = 0;
    
    // Return: The number of elements in the list.
    virtual int length() const = 0;
    
    // Return: The position of the current element.
    virtual int currPos() const = 0;
    
    // Set current position.
    // pos: The position to make current.
    virtual void moveToPos(int pos) = 0;
    
    // Return: The current element.
    virtual const E& getNextValue() const = 0;
    
    virtual const E& getDownValue() const = 0;
};

#endif /* list_h */