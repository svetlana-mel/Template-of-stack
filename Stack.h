#ifndef STACK_H
#define STACK_H

/**
* Storage for data in stack format
* @tparam Type the type of data stored in the Stack
*/
template<class Type>
class Stack {
private:
	int length_;
	Type* stack_;
public:
	Stack() : length_{ 0 }, stack_{ nullptr }{};
	Stack(int n) {
		if (n < 0) { throw std::exception("Stack length less than 0"); };
		if (n == 0) { throw std::exception("0 is not avaliable parametr in the Stack constructor"); };
		stack_ = new Type[n];
		length_ = n;
	}
	~Stack() {
		delete[] stack_;
	}
	// operators overloads
	Type& operator[] (int index) {
		if (index < 0 || index >= length_) {
			throw std::exception("Index is out of range");
		}
		return stack_[index];
	}

	friend std::ostream& operator<< (std::ostream& os, Stack& s) {
		os << "[ ";
		int len = s.getLength();
		for (int i = 0; i < len; i++) {
			if (i == len - 1) {
				os << s[i];
			}
			else {
				os << s[i] << ", ";
			}
		}
		os << " ]";
		return os;
	}
	// methods

	/**
	* возвращает количество элементов в стеке
	* @return stack length
	*/
	int getLength() {
		return length_;
	}
	/**
	* инициализация стека
	* @param n - stack length
	* @param arr - pointer at the first elem of the steck
	* @return ref to the Stack
	*/
	Stack<Type>& init(int n, Type* arr) {
		if (n < 0) { throw std::exception("Stack length less than 0"); };
		if (length_ != 0) { throw std::exception("Init function is not avaliable"); };
		stack_ = new Type[n];
		for (int i = 0; i < n; i++) {
			stack_[i] = arr[i];
		}
		length_ = n;
		return *this;
	}
	/**
	* добавление элемента в конец стека
	* @param elem - element to add to the end of the stack
	* @return ref to the Stack
	*/
	Stack<Type>& add(const Type& elem) {
		Type* s_new = new Type[length_ + 1];
		for (int i = 0; i < length_; i++) {
			s_new[i] = stack_[i];
		}
		s_new[length_] = elem;
		length_ += 1;
		Type* temporary = stack_;
		stack_ = s_new;
		delete[] temporary;
		return *this;
	}
	/** 
	* удаление элемента из конца стека
	* @return ref to the Stack
	*/
	Stack<Type>& remove() {
		if (length_ < 1) { throw std::exception("Try to delete element from stack with 0 length."); }
		Type* s_new = new Type[length_ - 1];
		for (int i = 0; i < length_ - 1; i++) {
			s_new[i] = stack_[i];
		}
		length_ -= 1;
		Type* temporary = stack_;
		stack_ = s_new;
		delete[] temporary;
		return *this;
	}
	/** 
	* возвращает последний элемент стека
	* @return the last element of the Stack
	*/ 
	Type& last() {
		return stack_[length_ - 1];
	}
	/**
	* проверка стека на пустоту
	* @return `true` if Stack is empty , `faulse` if is not empty
	*/
	bool isEmpty() {
		if (length_ == 0) {
			return false;
		}
		return true;
	}
	/**
	* удаляет содержимое стека, но не сам стек
	* @return ref to the Stack
	*/
	Stack<Type>& erase() {
		length_ = 0;
		delete[] stack_;
		stack_ = nullptr;
		return *this;
	}
};


#endif