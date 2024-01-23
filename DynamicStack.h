#ifndef DYNAMIC_STACK_H
#define DYNAMIC_STACK_H

#include <iostream>

template <typename T>
class DynamicStack {
private:
    T* stack;
    int top; 
    int capacity; 

public:
    DynamicStack(); 
    ~DynamicStack(); 
    bool isEmpty() const; 
    void push(const T& value); 
    T pop(); 
    int size() const; 
    void clear(); 
    T topElement() const; 
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const DynamicStack<T>& stack);

#include "DynamicStack.cpp"

#endif // DYNAMIC_STACK_H