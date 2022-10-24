#include <stdio.h>

typedef unsigned int uint8;

class List {
public:
	virtual bool push(uint8 v)=0;
	virtual bool push_at(uint8 v, uint8 i)=0;
	virtual bool pop()=0;
	virtual bool pop_at(uint8 i)=0;
	virtual uint8 at(uint8 i)=0;
	virtual uint8 size()=0;
};