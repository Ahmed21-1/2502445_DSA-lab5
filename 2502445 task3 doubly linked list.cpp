#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string playerName;
    Node* next;
};

int main() {
    // 5 players
    Node* p1 = new Node();
    Node* p2 = new Node();
    Node* p3 = new Node();
    Node* p4 = new Node();
    Node* p5 = new Node();

    p1->playerName = "Alice";
    p2->playerName = "Bob";
    p3->playerName = "Charlie";
    p4->playerName = "David";
    p5->playerName = "Emma";

    // Circular connection
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = p5;
    p5->next = p1; // Last points back to first

    // Display turns once
    cout << "Player Turns:\n";
    Node* current = p1;
    do {
        cout << "Player: " << current->playerName << endl;
        current = current->next;
    } while (current != p1);

    // Show that turn returns to first player
    cout << "After " << p5->playerName << ", turn goes back to: " << current->playerName << endl;

    return 0;
}