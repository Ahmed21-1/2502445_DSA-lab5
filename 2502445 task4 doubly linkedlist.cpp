#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string songTitle;
    Node* next;
};

int main() {
    // 5 songs 
    Node* s1 = new Node();
    Node* s2 = new Node();
    Node* s3 = new Node();
    Node* s4 = new Node();
    Node* s5 = new Node();

    s1->songTitle = "elektromania";
    s2->songTitle = "never say never";
    s3->songTitle = "sorry by justin bieber";
    s4->songTitle = "ship ship(safina safina)";
    s5->songTitle = "old mcdonald";

    // Circular connection (No NULL used)
    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = s5;
    s5->next = s1;

    // Display songs once
    cout << "--- Playlist Songs ---\n";
    Node* current = s1;
    do {
        cout << current->songTitle << endl;
        current = current->next;
    } while (current != s1);

    // Simulate 2 full rounds (5 songs * 2 = 10 plays)
    cout << "\n--- Playing 2 Complete Rounds ---\n";
    current = s1;
    for (int i = 1; i <= 10; i++) {
        cout << "\n Playing: " << current->songTitle << endl;
        current = current->next;
    }

    return 0;
}