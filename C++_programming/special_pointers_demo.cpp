#include <iostream>
#include <memory> // Required for smart pointers

using namespace std;

/* 
 * 1. THE 'this' POINTER (The Implicit Pointer)
 * ------------------------------------------
 * WHAT: A constant pointer (Type * const this) automatically passed to non-static member functions.
 * WHY: To let the code know which object's data to modify.
 * MEMORY: Not stored in the object; usually passed in a CPU register (like ECX).
 */
class Employee {
    int id;
    string name;

public:
    // Disambiguation: Resolving name conflict between parameter and member
    Employee(int id, string name) {
        this->id = id;       // 'this->id' is the member, 'id' is the parameter
        this->name = name;
    }

    // Method Chaining: Returning *this allows calling multiple methods in one line
    Employee& setID(int id) {
        this->id = id;
        return *this; 
    }

    Employee& setName(string name) {
        this->name = name;
        return *this;
    }

    void display() {
        cout << "Employee [ID: " << id << ", Name: " << name << "] at address: " << this << endl;
    }
};

/* 
 * 2. SMART POINTERS (Self-Managing Pointers)
 * ------------------------------------------
 * WHY: To avoid manual 'delete' and prevent memory leaks (RAII).
 */
class Resource {
public:
    Resource() { cout << "Resource Acquired\n"; }
    ~Resource() { cout << "Resource Released (Automatic!)\n"; }
    void sayHello() { cout << "Hello from Resource!\n"; }
};

/* 
 * 3. THE 'nullptr' (The Type-Safe Null)
 * ------------------------------------
 * WHY: Unlike 0 or NULL (integers), nullptr is a pointer-type constant.
 */
void testOverload(int x) { cout << "Called testOverload(int)\n"; }
void testOverload(char* p) { cout << "Called testOverload(char*)\n"; }

int main() {
    cout << "--- Section 1: The 'this' Pointer ---\n";
    Employee e1(101, "Sourav");
    
    // Method Chaining demo
    e1.setID(102).setName("Sourav Kumar").display();

    cout << "\n--- Section 2: Smart Pointers ---\n";
    {
        // unique_ptr: Exclusive ownership (cannot be copied)
        // Memory: Size of a raw pointer.
        unique_ptr<Resource> u_ptr = make_unique<Resource>();
        u_ptr->sayHello();
        
        // shared_ptr: Shared ownership (reference counting)
        // Memory: Twice the size of a raw pointer (object ptr + control block ptr).
        shared_ptr<Resource> s_ptr1 = make_shared<Resource>();
        {
            shared_ptr<Resource> s_ptr2 = s_ptr1; // Count = 2
            cout << "Reference count: " << s_ptr1.use_count() << endl;
        } // s_ptr2 goes out of scope, Count = 1
        cout << "Reference count: " << s_ptr1.use_count() << endl;
    } // Everything is automatically deleted here!

    cout << "\n--- Section 3: nullptr vs NULL ---\n";
    // testOverload(NULL); // AMBIGUOUS: Could call int or char* version
    testOverload(nullptr);   // CLEAR: Calls the char* version correctly

    return 0;
}
