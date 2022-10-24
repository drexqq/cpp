#include <stdio.h>
#include "strutil.h"
#include "array.h"
#include "linkedlist.h"
#include "stack.h"
#include "queue.h"

int main(int argc, char* argv[]) {
	//int len = str_length("test");
	//printf("%d\n", len);

	//char str[] = "AAAAAaBc";
	//str_lower(str);
	//printf("str_lower : %s\n", str);


	//char* a = "abc";
	//char* b = "abcd";
	//char* c = "abc";
	//char* d = "cba";
	//printf("str_compare : %s,%s %d\n", a, b, str_compare(a, b));
	//printf("str_compare : %s,%s %d\n", b, c, str_compare(b, c));
	//printf("str_compare : %s,%s %d\n", a, c, str_compare(a, c));
	//printf("str_compare : %s,%s %d\n", a, d, str_compare(a, d));


	//char* src = "abc";
	//char* dst = new char[str_length(str)];
	//str_copy(dst, src);
	//printf("dst : %s, src : %s\n", dst, src);


	//char* strdup = "eeef";
	//char* dup = str_dup(strdup);
	//printf("dup : %s, str : %s\n", dup, strdup);
	//delete dup;


	//char str1[200] = "abc";
	//char* str2 = "def";
	//str_append(str1, str2);
	//printf("%s\n", str1);


	//char* find1 = "abc";
	//char* find2 = "bc";
	//char* find = str_find(find1, find2);
	//printf("find : %s, 1 : %s, 2 : %s\n", find, find1, find2);


	//char strtrim[] = "      a  b   c      ";
	//str_trim(strtrim);
	//printf("trim : /%s/ \n", strtrim);


	//int l;
	//char maxrun[] = "aaabbbba";
	//char* addr = find_max_run(maxrun, &l);
	//printf("fmr : %s, l : %d\n", addr, l);


	//paint_star(5, 4, 4, 4);


	//Arr arr;
	//arr_alloc(&arr, 5);
	//arr_push_back(&arr, 1);
	//arr_push_back(&arr, 2);
	//arr_push_back(&arr, 3);

	//arr_push_at(&arr, 10, 3);
	//printf("%d\n", arr.A[0]);
	//printf("%d\n", arr.A[1]);
	//printf("%d\n", arr.A[2]);
	//printf("%d\n", arr.A[3]);

	//float avg = arr_avg(&arr);
	//printf("%f\n", avg);

	//arr_free(&arr);

	//printf("linked list\n");
	//list lst;
	//lst.hd = 0;
	//elem e1;
	//elem e2;
	//elem e3;
	//elem e4;
	//lst.hd = &e1;
	//e1.V = 1;
	//e1.p = &e2;

	//e2.V = 22;
	//e2.p = &e3;

	//e3.V = 333;
	//e3.p = &e4;

	//e4.V = 4444;
	//e4.p = 0;
	//printf("length : %d\n", get_length(&lst));
	//printf("last : %d\n", get_last(&lst)->V);
	//printf("get val : %d\n", get_val(&lst, 5));
	//printf("get index : %d\n", get_index(&lst, 4444));

	//list_push_back(&lst, 55555);
	//printf("length : %d\n", get_length(&lst));
	//printf("push last : %d\n", get_last(&lst)->V);

	//list_pop_back(&lst);
	//printf("length : %d\n", get_length(&lst));
	//printf("pop last : %d\n", get_last(&lst)->V);

	//list_pop_back(&lst);
	//printf("length : %d\n", get_length(&lst));
	//printf("pop last : %d\n", get_last(&lst)->V);

	//list_push_front(&lst, 9999);
	//printf("push front : %d\n", get_val(&lst, 0));
	//printf("length : %d\n", get_length(&lst));

	//list_pop_front(&lst);
	//printf("pop front : %d\n", get_val(&lst, 0));
	//printf("length : %d\n", get_length(&lst));

	//list_push_front(&lst, 567);
	//list_push_front(&lst, 345);
	//list_push_front(&lst, 525);
	//printf("length : %d\n", get_length(&lst));
	//list_push_at(&lst, 1234, 2);
	//printf("length : %d\n", get_length(&lst));

	//list_pop_at(&lst, 2);
	//printf("length : %d\n", get_length(&lst));


	//stack s;
	//s.init();
	//printf("%d\n", s.empty());
	//s.push(1);
	//s.push(2);
	//s.push(3);
	//s.push(4);
	//s.show();
	//printf("%d\n", s.size());

	//s.pop();
	//s.pop();
	//s.show();
	//printf("%d\n", s.empty());
	//printf("%d\n", s.size());

	queue q;
	q.init();
	printf("%d\n", q.empty());
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.show();
	printf("%d\n", q.size());

	printf("pop %d\n", q.pop());
	printf("pop %d\n", q.pop());
	q.show();
	printf("%d\n", q.empty());
	printf("%d\n", q.size());

	return 0;
}
