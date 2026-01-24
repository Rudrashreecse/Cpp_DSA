#include <bits/stdc++.h>
using namespace std;

class circularqueue {
public:
    int* arr;
    int f, b, currsize, capacity;

    circularqueue(int size) {
        f = 0;
        b = -1;
        currsize = 0;
        capacity = size;
        arr = new int[size];
    }

    void push(int el) {
        if (currsize == capacity) {
            cout << "cq is full!\n";
            return;
        }
        b = (b + 1) % capacity;
        arr[b] = el;
        currsize++;
    }

    void pop() {
        if (currsize == 0) {
            cout << "cq is empty!\n";
            return;
        }
        f = (f + 1) % capacity;
        currsize--;
    }

    int front() {
        if (currsize == 0) {
            cout << "cq is empty!\n";
            return -1;
        }
        return arr[f];
    }

    int back() {
        if (currsize == 0) {
            cout << "cq is empty!\n";
            return -1;
        }
        return arr[b];
    }

    int size() {
        return currsize;
    }

    bool empty() {
        return currsize == 0;
    }

    void display() {
        if (currsize == 0) {
            cout << "cq is empty!\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < currsize; i++) {
            cout << arr[(f + i) % capacity] << " ";
        }
        cout << "\n";
    }
};

int main() {
    circularqueue cq(5);

    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cq.push(60); // prints "cq is full!"

    cq.display();

    cout << "Front element: " << cq.front() << "\n";
    cout << "Back element: " << cq.back() << "\n";

    cq.pop();
    cq.pop();

    cq.display();

    cout << "Front after pops: " << cq.front() << "\n";
    cout << "Back after pops: " << cq.back() << "\n";

    cout << "Queue size: " << cq.size() << "\n";
    cout << "Is empty? " << (cq.empty() ? "Yes" : "No") << "\n";

    return 0;
}

