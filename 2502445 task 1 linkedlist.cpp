#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string website;
    Node* prev;
    Node* next;
};

int main() {
    // 5 nodes 
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();
    Node* n5 = new Node();

    n1->website = "google.com";
    n2->website = "youtube.com";
    n3->website = "github.com";
    n4->website = "stackoverflow.com";
    n5->website = "wikipedia.org";

    // Ptrs connected
    n1->prev = NULL; n1->next = n2;
    n2->prev = n1;   n2->next = n3;
    n3->prev = n2;   n3->next = n4;
    n4->prev = n3;   n4->next = n5;
    n5->prev = n4;   n5->next = NULL;

    // First -> Last Traversal
    cout << "Forward: ";
    Node* temp = n1;
    while (temp != NULL) {
        cout << temp->website << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    // Last -> First Traversal
    cout << "Backward: ";
    temp = n5;
    while (temp != NULL) {
        cout << temp->website << " -> ";
        temp = temp->prev;
    }
    cout << "NULL\n";
}