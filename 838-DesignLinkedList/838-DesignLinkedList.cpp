// Last updated: 5/10/2026, 11:49:50 PM
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        next = nullptr;
    }
};

class MyLinkedList {
private:
    Node* head;
    int size;

public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* temp = head;
        while (index > 0) {
            temp = temp->next;
            index--;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        Node* temp = head;
        if(temp == NULL){
            head = newNode;
        }else{
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;

        if (index == 0) {
            addAtHead(val);
            return;
        } 
            Node* curr = head;
            int i = 0;
            while(i < index-1){
                if(curr == NULL){
                    return;
                }
                i++;
                curr = curr->next;
                
            }
            
            Node* newNode = new Node(val);
            Node* nextNode = curr->next;
            curr->next = newNode;
            newNode->next = nextNode;
            size++;
    }
    
    void deleteAtIndex(int index) {
    if (index < 0 || index >= size) return;

    Node* curr = head;
    Node* prev = nullptr;

    while (index > 0) {
        prev = curr;
        curr = curr->next;
        index--;
    }
    if (prev == nullptr) {
        head = head->next;
    } else {
        prev->next = curr->next;
    }

    delete curr;
    size--;
}

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */