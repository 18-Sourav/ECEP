/* 
  Note : Iterator is actually a nested class defined inside the stirng class
  which can be accessed like - string::iterator to create iterator object.
  example : 
  string str("Hello");
  string::iterator it = str.begin(); 
  here, specially you focus on operator overloading and begin(), end() methods.

*/
#include <iostream>
using namespace std;

class MyString {
	private:
	char* data;
	size_t len;

	public:
	// Constructor
	MyString(const char* str = "") 
	{  
		len = 0;
		while (str[len] != '\0')
			len++;

		data = new char[len + 1];
		for (size_t i = 0; i < len; ++i)
			data[i] = str[i];
		data[len] = '\0';
	}
	MyString(int n, char ele)
	{
	    len = 0;
	    data = new char[n+1];
	    while(len < n)
	    {
		data[len++] = ele;
	    }
	    data[len] = '\0';
	}
	MyString(MyString & other)
	{
	    len = 0;
	    data = new char[other.len+1];
	    while(other.data[len])
	    {
		data[len] = other.data[len];
		len++;
	    }
	    data[len] = '\0';
	}


	void display() const {
		cout << data << endl;
	}
	size_t length()
	{
	    return len;
	}
	const char * c_str()
	{
	    return data;
	}
	char at(int i)
	{
	    return data[i];
	}
	void clear()
	{
	    char *temp = data;
	    data = new char('\0');
	    delete [] temp;
	}

	// Destructor
	~MyString() {
		delete[] data;
	}

	// Nested iterator class
	class Iterator {
		private:
		char* ptr;
		public:
		// Constructor
		Iterator(char* p = NULL) : ptr(p) {}

		// Dereference operator overloading
		char & operator*() { return *ptr; }

		// Pre-increment
		Iterator& operator++() {
			++ptr;
			return *this;
		}

		// Equality check between iterators
		bool operator!=(const Iterator& other) const {
			return ptr != other.ptr;
		}
	};

	Iterator begin() { return Iterator(data); }
	// here direct we are returning the Iterator obj, pointing to start
	Iterator end() { return Iterator(data + len); }
	// here direct we are returning the Iterator obj, pointing to end

};

int main() {
	MyString str("Hello");
	str.display();
	cout << str.length() << endl;

	MyString str2;
	cout << str2.length() << endl;

	MyString str3(5, '*');
	str3.display();

	MyString str4(str);
	str4.display();

	MyString str5("Emertxe");
	MyString::Iterator it;
	for(it = str5.begin(); it != str5.end(); ++it)
	{
	    cout << *it ;
	}
	cout << endl;


	cout << sizeof(MyString) << endl;
	cout << sizeof(MyString::Iterator) << endl;











/*
	// here you must focus on sizeof() each classs
	cout << "size = " << sizeof(str) << endl;
	cout << "size = " << sizeof(MyString::Iterator) << endl;

	cout << "String content: ";
	str.display();

	cout << "Characters using iterator: ";
	for (MyString::Iterator it = str.begin(); it != str.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
*/
	return 0;
}

#if 0
	// Nested iterator class
	class Iterator {
		private:
		char* ptr;
		public:
		// Constructor
		Iterator(char* p) : ptr(p) {}

		// Dereference operator
		char& operator*() { return *ptr; }

		// Pre-increment
		Iterator& operator++() {
			++ptr;
			return *this;
		}

		// Equality check between iterators
		bool operator!=(const Iterator& other) const {
			return ptr != other.ptr;
		}
	};
#endif
