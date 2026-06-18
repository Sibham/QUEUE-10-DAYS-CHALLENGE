#include <bits/stdc++.h>
using namespace std;

class Queue {
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty() {
        return qfront == rear;
    }

    void enqueue(int data) {
        if (rear == size) {
            cout << "Queue is Full" << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if (qfront == rear) {
            return -1; // Queue empty
        } else {
            int ans = arr[qfront];
            qfront++;
            if (qfront == rear) {
                // Reset queue when empty
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if (qfront == rear) {
            return -1;
        } else {
            return arr[qfront];
        }
    }
};
