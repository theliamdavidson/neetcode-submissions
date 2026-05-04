class Node {
public:
    int value;
    Node* next;
    Node* prev;

    Node(int value) : value(value), next(nullptr), prev(nullptr) {}
};

class Deque {
private:
    Node* dummyHead;
    Node* dummyTail;

public:
    Deque() {
        dummyHead = new Node(0);
        dummyTail = new Node(0);

        dummyHead->next = dummyTail;
        dummyTail->prev = dummyHead;
    }

    bool isEmpty() {
        return dummyHead->next == dummyTail;
    }

    void append(int value) {

        Node* dummyNode = new Node(value);
        
        dummyNode->next = dummyTail; // 2 nodes pointing at tail next
        dummyNode->prev = dummyTail->prev;

        dummyTail->prev->next = dummyNode; // this should make the line go [n-1] -> [n] -> tail
        dummyTail->prev = dummyNode;
    }

    void appendleft(int value) {
        Node* dummyNode = new Node(value);
        
        dummyNode->next = dummyHead->next; 
        dummyNode->prev = dummyHead;

        dummyHead->next->prev = dummyNode; // this should make the line go [n-1] -> [n] -> tail
        dummyHead->next = dummyNode;
    }

    int pop() {
        if(isEmpty()) return -1;
        Node* targetNode = dummyTail->prev;
        int value = targetNode->value;

        targetNode->prev->next = dummyTail;
        dummyTail->prev = targetNode->prev;
        delete targetNode;
        return value;
    }

    int popleft() {
        if(isEmpty()) return -1;
        Node* targetNode = dummyHead->next;
        int value = targetNode->value;

        targetNode->next->prev = dummyHead;
        dummyHead->next = targetNode->next;
        delete targetNode;
        return value;
    }
};
