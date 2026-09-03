#include <iostream>
#include <unordered_map>
using namespace std;

class LRUCache {
    struct Node {
        int key, value;
        Node *prev, *next;

        Node(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
    };

    int capacity;
    unordered_map<int, Node*> cache;
    Node *head, *tail;

    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insertFront(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

public:
    LRUCache(int cap) {
        capacity = cap;
        head = new Node(0, 0);
        tail = new Node(0, 0);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (cache.find(key) == cache.end())
            return -1;

        Node* node = cache[key];

        remove(node);
        insertFront(node);

        return node->value;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            node->value = value;

            remove(node);
            insertFront(node);
            return;
        }

        Node* node = new Node(key, value);
        cache[key] = node;
        insertFront(node);

        if (cache.size() > capacity) {
            Node* leastUsed = tail->prev;

            remove(leastUsed);
            cache.erase(leastUsed->key);
            delete leastUsed;
        }
    }

    ~LRUCache() {
        Node* current = head;

        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    LRUCache cache(3);

    cache.put(1, 10);
    cache.put(2, 20);
    cache.put(3, 30);

    cout << cache.get(1) << endl;

    cache.put(4, 40);

    cout << cache.get(2) << endl;
    cout << cache.get(3) << endl;
    cout << cache.get(4) << endl;

    return 0;
}
