#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {}
	MutantStack(const MutantStack<T>& src) { *this = src; }
	MutantStack<T>& operator=(const MutantStack<T>& rhs)
	{
		this->c = rhs.c;
		return *this;
	}
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

template<typename T>
void printStack(std::stack<T> s)
{
	if (s.empty())
		return;
	int x = s.top();
	s.pop();
	printStack(s);
	std::cout << x << std::endl;
	s.push(x);
}

#endif
