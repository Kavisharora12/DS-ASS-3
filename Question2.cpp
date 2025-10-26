#include <iostream>
using namespace std;

class Stack {
    static const int MAX = 1000;
    char arr[MAX];
    int top;
public:
    Stack() { top = -1; }
    bool isFull() {
        return top == MAX - 1;
    }
    bool isEmpty() {
        return top == -1;
    }
    void push(char c) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = c;
    }
    char pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return '\0';
        }
        return arr[top--];
    }
};
int main() {
    string str;
    cout << "Enter a string to reverse: ";
    cin>> str;
    Stack s;
    for (char c : str) {
        s.push(c);
    }
    string reversedStr;
    while (!s.isEmpty()) {
        reversedStr += s.pop();
    }
    cout << "Reversed string: " << reversedStr << endl;
    return 0;
}
