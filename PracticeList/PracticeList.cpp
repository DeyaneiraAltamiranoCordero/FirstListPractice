#include <iostream>

class Dog {
private:
    int age;
    std::string name;
    bool hasOwner;
    std::string breed;
public:
    Dog(int _age, const std::string& _name, bool _hasOwner, const std::string& _breed) :
        age(_age), name(_name), hasOwner(_hasOwner), breed(_breed) {}

    bool getHasOwner() {
        return hasOwner;
    }
};

class Node {
public:
    Dog* data;
    Node* next;

    Node(Dog* _data) : data(_data), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(Dog* dog) {

    }

    void display() {
    }
    
    void filterByHasOwner(bool hasOwner) 
    {
        Node* current = head;

        while (current) 
        {
            if (current->data->getHasOwner() == hasOwner) {
                std::cout << current->data;
            }
            current = current->next;
        }
    }


};

int main() {
    LinkedList dogList;
    dogList.insert(new Dog(3, "Buddy", true, "Golden Retriever"));
    dogList.insert(new Dog(2, "Max", false, "Labrador"));
    dogList.insert(new Dog(5, "Lucy", true, "Poodle"));

    std::cout << "List of Dogs:" << std::endl;
    dogList.display();

    return 0;
}