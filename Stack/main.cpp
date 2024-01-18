#include <iostream>

using namespace std;
#define CAPACITY 4
//declare stack
int stack[CAPACITY];
int top = -1;

//this method is use for push data into array
void push(int x) {
//array start from 0 when push one element top = 0 and capacity remains 3
//when push 2 element top = 1 and capacity remains 2
//when push 3 element top = 2 and capacity remains 1
//when push 4 element top = 3 and capacity remains 0
//check if top value is less than capacity - 1
//because capacity define = 4 and top define - 1
    if (top < CAPACITY - 1) {
        //  increment top value
        top = top + 1;
        stack[top] = x;
        printf("Successfully pushed %d\n", x);
    } else {
        printf("Exception from push! Stack is full\n");
    }
}

//this method is use for remove data from stack
int pop() {
    if (top >= 0) {
        int val = stack[0];
        top = top - 1;
        return val;
    } else {
        printf("Stack is empty!\n");
        return -1;
    }
}
//peek method not delete or replace element but its return top of the element
int peek() {
    if (top >= 0) {
        return stack[top];
    } else {
        printf("Stack is empty!\n");
        return -1;
    }
}

int main() {
    printf("Implement Stack in C\n");
    peek();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    push(60);
    printf("Top Element of the stack %d\n", peek());
    return 0;
};