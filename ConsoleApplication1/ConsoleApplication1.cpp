#include <iostream>
using namespace std;

struct Node
{
	int noMhs;
	string name;
	Node* next;
};

Node* START = NULL;
void addNote() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "Masukan NIM : ";
	cin >> nim;
	cout << "Masukkan Nama: ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = nama;

	if (START == NULL || nim <= START->noMhs) {
		cout << "NIM sudah ada" << endl;
		return;

	}

	Node* current = START;
	Node* previous = START;
	
	while ((current != NULL) && (nim >= current->noMhs))
	{
		if (nim == current->noMhs)
		{
			cout << "Nim sudah ada" << endl;
			return;

		}
		previous = current;
		current = current->next;
	}
	nodeBaru->next = current;
	previous->next = nodeBaru;
}
bool searchNode(int nim, Node* current, Node* previous) {
	previous = START;
	current = START;

}
while ((current != NULL) && (nim >= current->noMhs))

	if ()

	previous = current;
	current = current->next;

	bool deleteNode(int nim) {
		Node* current = START;
		Node* previous = START;
		if (searchNode(nim, previous, current) == false)
			return false;
		previous->next = current->next;
		if (current == START)
			START = current->next;
		return true;
	}

	bool listEmpty()
	{
		if (listEmpty())
			if ((START = NULL))
				return true;
			else
				return false;
	}
		
		{
			cout << "List Kosong" << endl;
			system("pause");
			system("cls");
			return;
		}
		else {
			Node* currentNode = START;
			while (currentNode != NULL)
			{
				cout<<"Nim: " currentNode->noMhs<<",Nama"
			}

		}