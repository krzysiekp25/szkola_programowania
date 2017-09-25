#include <iostream>
#include <string>
#include "queuetp.h"
#include "worker.h"

int main()
{
	QueueTp<Worker*> kolejka(3);
	Worker jeden("Taki jeden", 1234);
	Worker dwa;
	dwa.Set();
	Worker trzy("Trzeci obiekt", 321876);

	kolejka.enqueue(&jeden);
	kolejka.enqueue(&dwa);
	kolejka.enqueue(&trzy);

	Worker * pWorker = nullptr;

	kolejka.dequeue(pWorker);
	pWorker->Show();
	kolejka.dequeue(pWorker);
	pWorker->Show();
	kolejka.dequeue(pWorker);
	pWorker->Show();
	
	system("pause");
	return 0;
}

