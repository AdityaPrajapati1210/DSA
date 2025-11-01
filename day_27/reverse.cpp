#include <stdio.h>
#define MAX 10   // Maximum size of stack

int stack[MAX];
int top = -1;

// Function to push element
void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", x);
    } else {
        stack[++top] = x;
        printf("Pushed: %d\n", x);
    }
}

// Function to display stack
void display(){
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}


void reverse(){
     for (int i = 0; i <= top/2; i++) {
            int temp = stack[i];
            stack[i] = stack[top -i];
            stack[top-i] = temp;
        }
}

int main() {
    // Push elements 1 to 6
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    display();  // Show stack
    
    reverse();
    display();
    return 0;
}
