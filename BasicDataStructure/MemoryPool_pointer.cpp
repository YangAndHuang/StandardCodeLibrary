#include <stdio.h>

const int M=1e5;

template<class T>
struct MemoryPool
{
	T a[M],*b[M];
	int pa,pb;
	MemoryPool()
	{
		pa=pb=0;
	}
	T* add()
	{
		return pb?b[--pb]:&a[pa++];
	}
	void del(T *x)
	{
		b[pb++]=x;
	}
};

int main()
{
	return 0;
}