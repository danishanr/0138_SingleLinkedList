#include <iostream>
using namespace std;

class Node
{
public :
    int noMhs;
    Node *next;
}
;

class List
{
    Node *START;

public :
    List()
    {
        START = NULL;
    }
    
    void addNote()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa: ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if (START == NULL || nim <= START->noMhs)
        {
            /* code */
        }
        
    }
};