#pragma once

template <class Item>
class QueueTp
{
private:
	struct Node { Item item; struct Node * next; };
	enum {Q_SIZE = 10};
	Node * front;
	Node * rear;
	int items;
	const int qsize;
	QueueTp(const QueueTp & q) : qsize(0) {}
	QueueTp & operator=(const QueueTp & q) { return *this; }
public:
	QueueTp(int qs = Q_SIZE);
	~QueueTp();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item &item);
	bool dequeue(Item &item);
};

template<class Item>
QueueTp<Item>::QueueTp(int qs) : qsize(qs)
{
	front = rear = nullptr;
	items = 0;
}

template<class Item>
QueueTp<Item>::~QueueTp()
{
	Node * temp;
	while (front != nullptr)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template<class Item>
bool QueueTp<Item>::isempty() const
{
	return items == 0;
}

template<class Item>
bool QueueTp<Item>::isfull() const
{
	return items == qsize;
}

template<class Item>
int QueueTp<Item>::queuecount() const
{
	return items;
}

template<class Item>
bool QueueTp<Item>::enqueue(const Item & item)
{
	if (isfull())
		return false;
	Node * add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;
	if (front == nullptr)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

template<class Item>
bool QueueTp<Item>::dequeue(Item & item)
{
	if (front == nullptr)
		return false;
	item = front->item;
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = nullptr;
	return true;
}
