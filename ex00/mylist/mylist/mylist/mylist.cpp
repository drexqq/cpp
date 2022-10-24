#include "List.h"
#include "StaticList.h"
#include "DynamicList.h"
#include "LinkedList.h"
#include "LinkedStaticArrayList.h"

int main(int argc, char* argv[]) {

	//StaticList sl = StaticList();
	//sl.show();
	//for (int i = 1; i < 10; i++)
	//	sl.push(i);
	//sl.show();
	//sl.push_at(9999, 0);
	//sl.show();
	//sl.pop();
	//sl.show();
	//sl.pop_at(0);
	//sl.show();
	//sl.push_at(5555, 5);
	//sl.show();
	//sl.push_at(4444, 9);
	//sl.show();

	//DynamicList dl = DynamicList(10);
	//dl.show();
	//for (int i = 1; i < 3; i++)
	//	dl.push(i);
	//dl.show();
	//dl.push_at(9999, 0);
	//dl.show();
	//dl.pop();
	//dl.show();
	//dl.pop_at(0);
	//dl.show();
	//dl.push_at(5555, 5);
	//dl.show();
	//dl.push_at(4444, 9);
	//dl.show();
	//dl.pop();
	//dl.show();

	//LinkedList ll = LinkedList();
	//ll.push(1);
	//ll.push(2);
	//ll.push(3);
	//ll.push(4);
	//printf("main : size : %d\n", ll.size());
	//ll.show();

	//ll.push_at(99, 0);
	//ll.show();

	//ll.push_at(99, 2);
	//ll.show();

	//ll.push_at(99, 4);
	//ll.show();
	//ll.show();
	//ll.pop();
	//ll.show();
	//ll.pop();
	//ll.show();
	//ll.pop();
	//ll.show();
	//ll.pop();
	//ll.show();
	//ll.pop();
	//ll.show();
	//ll.pop();
	//ll.show();
	//ll.pop();
	//ll.show();
	//ll.pop_front();
	//ll.pop();
	//ll.pop_at(2);
	//ll.pop_at(3);
	//ll.show();

	LinkedStaticArrayList lal = LinkedStaticArrayList();
	lal.push(9);
	lal.push(9);
	lal.push(9);
	lal.push(9);

	return 0;
}

