//CODE 360 - CIRCULAR QUEUE
#include <bits/stdc++.h>


class CircularQueue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value) {
        // Queue full condition
        if ((front == 0 && rear == size - 1) || (rear == (front - 1 + size) % size)) {
            return false;
        } else if (front == -1) { // First element
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) { // Wrap around
            rear = 0;
        } else { // Normal case
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    int dequeue() {
        if (front == -1) {
            return -1; // Queue empty
        }
        int ans = arr[front];
        arr[front] = -1;

        if (front == rear) { // Single element
            front = rear = -1;
        } else if (front == size - 1) { // Wrap around
            front = 0;
        } else {
            front++;
        }
        return ans;
    }
};
