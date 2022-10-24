typedef unsigned int	uint8;

typedef struct elem {
	uint8 V;
	elem* p;
} elem;

typedef struct {
	elem* hd;
} list;

bool empty(list* lst) {
	return lst->hd ? false : true;
}

uint8 get_length(list* lst) {
	if (empty(lst))
		return 0;
	elem* head = lst->hd;
	int i = 1;
	while (head->p) {
		head = head->p;
		i++;
	}
	return i;
}

elem* get_last(list* lst) {
	if (empty(lst))
		return 0;
	elem* head = lst->hd;
	while (head->p)
		head = head->p;
	return head;
}

int get_val(list* lst, int pos) {
	int i = 0;
	elem* head = lst->hd;
	while (head) {
		if (i == pos)
			return head->V;
		head = head->p;
		i++;
	}
	return -1;
}

int get_index(list* lst, int val) {
	int i = 0;
	elem* head = lst->hd;
	while (head) {
		if (head->V == val)
			return i;
		head = head->p;
		i++;
	}
	return -1;
}

bool list_push_back(list *lst, int val) {
	elem* last = get_last(lst);
	elem* e = new elem;
	e->V = val;
	e->p = 0;
	last->p = e;
	return 1;
}

bool list_pop_back(list *lst) {
 	if (empty(lst))
		return 0;
	elem* head = lst->hd;
	while (head) {
		if (head->p->p == 0)
			break;
		head = head->p;
	}
	delete head->p->p;
	head->p = 0;
	return 1;
}

void list_push_front(list *lst, int val) {
	elem* e = new elem;
	e->V = val;
	e->p = lst->hd;
	lst->hd = e;
}

bool list_pop_front(list *lst) {
	if (empty(lst))
		return 0;
	if (lst->hd) {
		elem* e = lst->hd;
		lst->hd = e->p;
	}
	return 1;
}

void list_push_at(list* lst, int val, int pos) {
	elem* head = lst->hd;
	int i = 0;
	while (head) {
		if (i == pos - 1)
			break;
		head = head->p;
		i++;
	}
	elem* e = new elem;
	e->V = val;
	e->p = head->p;
	head->p = e;
}

bool list_pop_at(list* lst, int pos) {
	if (empty(lst))
		return 0;
	elem* head = lst->hd;
	int i = 0;
	while (head) {
		if (i == pos - 1)
			break;
		head = head->p;
		i++;
	}
	head->p = head->p->p;
	return 1;
}