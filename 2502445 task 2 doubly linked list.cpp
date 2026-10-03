#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string imageName;
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

    // Image names 
    n1->imageName = "sunset.jpg";
    n2->imageName = "mountains.png";
    n3->imageName = "ocean.jpg";
    n4->imageName = "forest.png";
    n5->imageName = "city.jpg";

    n1->prev = NULL; n1->next = n2;
    n2->prev = n1;   n2->next = n3;
    n3->prev = n2;   n3->next = n4;
    n4->prev = n3;   n4->next = n5;
    n5->prev = n4;   n5->next = NULL;
    // Display First -> Last
    cout << "Images (First to Last):\n";
    Node* current = n1;
    while (current != NULL) {
        cout << "[" << current->imageName << "] ";
        current = current->next;
    }
    // Display Last -> First
    cout << "\n\nImages (Last to First):\n";
    current = n5;
    while (current != NULL) {
        cout << "[" << current->imageName << "] ";
        current = current->prev;
    }
    cout << endl;
}