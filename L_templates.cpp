#include <iostream>
#include <stdexcept>
#include "Stack.h"
#include "Pair.h"


void test(Stack<int>& stack);
void test(Stack<float>& stack);
void test(Stack<double>& stack);
void test(Stack<char>& stack);
void test(Stack<Pair>& stack);

int main()
{ 
	setlocale(LC_ALL, "");

	try {
		while (true) {
			std::cout << "Запуск тестов. Выберите номер типа данных для которых будет реализован стек.\n";
			std::cout << "1 -- int   |\n";
			std::cout << "2 -- float |\n";
			std::cout << "3 -- double|\n";
			std::cout << "4 -- char  |\n";
			std::cout << "5 -- Pair  |\n";
			std::cout << "===========|\n";
			std::cout << "0 -- EXID  |\n";
			int N = 0;
			std::cin >> N;
			if (N == 0) { break; }
			switch (N) {
			case 1: {
				Stack<int> s = Stack<int>();
				test(s);
				break;
			}
			case 2: {
				Stack<float> s = Stack<float>();
				test(s);
				break; 
			}
			case 3: {
				Stack<double> s = Stack<double>();
				test(s);
				break;
			}
			case 4: {
				Stack<char> s = Stack<char>();
				test(s);
				break;
			}
			case 5: {
				Stack<Pair> s = Stack<Pair>();
				test(s);
				break;
			}
			default:
				std::cout << "Введенный номер вне допустимого диапозона, попробуйте еще раз.";
				break;
			}
		}
	}
	catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
	return 0;
}
