#include <iostream>
using namespace std;

template <class myClass>
class ListNode {
public:
	ListNode(myClass newData); //Constructor for a list node
	ListNode(const ListNode &copy); // copy constructor 

	~ListNode(); // destructor

	//Getters
	myClass getData() const;
	ListNode* getNextPtr() const;

	//Setters
	void setData(const myClass newData);
	void setNextPtr(ListNode * const pNewNext) const;
private:
	myClass data;
	ListNode* pNext;
};