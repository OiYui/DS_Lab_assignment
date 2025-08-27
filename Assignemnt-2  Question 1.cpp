#include <iostream>
using namespace std;

#define MAXLEN 100   // Maximum size of stack

// Stack structure
struct Stack {
    int element[MAXLEN];
    int top;
};

// Initialize stack
Stack init() {
    Stack S;
    S.top = -1;
    return S;
}

// Check if stack is empty
bool isEmpty(Stack S) {
    return (S.top == -1);
}

// Check if stack is full
bool isFull(Stack S) {
    return (S.top == MAXLEN - 1);
}

// Push operation
void push(Stack &S, int x) {
    if (isFull(S)) {
        cout << "Stack Overflow! Cannot push " << x << endl;
    } else {
        S.element[++S.top] = x;
    }
}

// Pop operation
int pop(Stack &S) {
    if (isEmpty(S)) {
        cout << "Stack Underflow! Cannot pop." << endl;
        return -1;
    } else {
        return S.element[S.top--];
    }
}

// Get top element
int top(Stack S) {
    if (isEmpty(S)) {
        cout << "Empty stack!" << endl;
        return -1;
    } else {
        return S.element[S.top];
    }
}

// Main function to test stack
int main() {
    Stack S = init();

    push(S, 10);
    push(S, 20);
    push(S, 30);

    cout << "Top element: " << top(S) << endl;

    cout << "Popped: " << pop(S) << endl;
    cout << "Top element after pop: " << top(S) << endl;

    if (isEmpty(S)) cout << "Stack is empty\n";
    else cout << "Stack is not empty\n";

    return 0;
}