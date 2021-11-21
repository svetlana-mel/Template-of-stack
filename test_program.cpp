#include <iostream>
#include <stdexcept>
#include "Stack.h"
#include "Pair.h"

void test(Stack<int>& stack) {
	try {
		// ������������� �����
		int arr[] = { 1, 2, 3, 4, 5 };
		stack.init(5, arr);
		std::cout << "����� ����� �� ������ ������������� \n-> " << stack.getLength() << std::endl;
		std::cout << "���������� ����� \n-> " << stack << std::endl;
		std::cout << "���������� � ����� ����� 1 �������� \n->" << stack.add(6) << std::endl;
		std::cout << "������� ���������� �������� ����� \n->" << stack.last() << std::endl;
		std::cout << "�������� 1 �������� �� ����� ����� \n->" << stack.remove() << std::endl;
		std::cout << "�������� ����� �� ������� \n->" << stack.isEmpty() << std::endl;
		std::cout << "�������� �����" << stack.erase() << std::endl;
		std::cout << "�������� ����� �� ������� \n->" << stack.isEmpty() << std::endl;
		std::cout << "==================================\n" << std::endl;
	}
	catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
}

void test(Stack<float>& stack) {
	try {
		// ������������� �����
		float arr[] = { 1.4, 2.4, 3.5, 4.56, 5.34 };
		stack.init(5, arr);
		std::cout << "����� ����� �� ������ ������������� \n-> " << stack.getLength() << std::endl;
		std::cout << "���������� ����� \n-> " << stack << std::endl;
		std::cout << "���������� � ����� ����� 1 �������� \n->" << stack.add(6.0) << std::endl;
		std::cout << "������� ���������� �������� ����� \n->" << stack.last() << std::endl;
		std::cout << "�������� 1 �������� �� ����� ����� \n->" << stack.remove() << std::endl;
		std::cout << "�������� ����� �� ������� \n->" << stack.isEmpty() << std::endl;
		std::cout << "�������� �����" << stack.erase() << std::endl;
		std::cout << "�������� ����� �� ������� \n->" << stack.isEmpty() << std::endl;
		std::cout << "==================================\n" << std::endl;
	}
	catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
}

void test(Stack<double>& stack) {
	try {
		// ������������� �����
		double arr[] = { 1.2, 2.34, 3.72, 4.09, 5.0 };
		stack.init(5, arr);
		std::cout << "����� ����� �� ������ ������������� \n-> " << stack.getLength() << std::endl;
		std::cout << "���������� ����� \n-> " << stack << std::endl;
		std::cout << "���������� � ����� ����� 1 �������� \n->" << stack.add(6.0) << std::endl;
		std::cout << "������� ���������� �������� ����� \n->" << stack.last() << std::endl;
		std::cout << "�������� 1 �������� �� ����� ����� \n->" << stack.remove() << std::endl;
		std::cout << "�������� ����� �� ������� \n->" << stack.isEmpty() << std::endl;
		std::cout << "�������� �����" << stack.erase() << std::endl;
		std::cout << "�������� ����� �� ������� \n->" << stack.isEmpty() << std::endl;
		std::cout << "==================================\n" << std::endl;
	}
	catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
}

void test(Stack<char>& stack) {
	try {
		// ������������� �����
		char arr[] = { 'q', 'u', 'e', 'r', 'y' };
		stack.init(5, arr);
		std::cout << "����� ����� �� ������ ������������� \n-> " << stack.getLength() << std::endl;
		std::cout << "���������� ����� \n-> " << stack << std::endl;
		std::cout << "���������� � ����� ����� 1 �������� \n-> " << stack.add(6) << std::endl;
		std::cout << "������� ���������� �������� ����� \n-> " << stack.last() << std::endl;
		std::cout << "�������� 1 �������� �� ����� ����� \n-> " << stack.remove() << std::endl;
		std::cout << "�������� ����� �� ������� \n-> " << stack.isEmpty() << std::endl;
		std::cout << "�������� �����" << stack.erase() << std::endl;
		std::cout << "�������� ����� �� ������� \n-> " << stack.isEmpty() << std::endl;
		std::cout << "==================================\n" << std::endl;
	}
	catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
}

void test(Stack<Pair>& stack) {
	try {
		// ������������� �����
		Pair arr[] = { Pair(1, 2.0), Pair(3, 2.78), Pair(6, 1.4), Pair(1, 0.67), Pair(1, 2.2) };
		stack.init(5, arr);
		std::cout << "����� ����� �� ������ ������������� \n-> " << stack.getLength() << std::endl;
		std::cout << "���������� ����� \n-> " << stack << std::endl;
		std::cout << "���������� � ����� ����� 1 �������� \n-> " << stack.add(Pair(0, 0.0)) << std::endl;
		std::cout << "������� ���������� �������� ����� \n-> " << stack.last() << std::endl;
		std::cout << "�������� 1 �������� �� ����� ����� \n-> " << stack.remove() << std::endl;
		std::cout << "�������� ����� �� ������� \n-> " << stack.isEmpty() << std::endl;
		std::cout << "�������� �����" << stack.erase() << std::endl;
		std::cout << "�������� ����� �� ������� \n-> " << stack.isEmpty() << std::endl;
		std::cout << "==================================\n" << std::endl;
	}
	catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
}