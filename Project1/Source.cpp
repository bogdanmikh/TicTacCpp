#include <iostream>

void printField(char* x) {
	for (int i = 0; i < 9; i++) {
		if (i % 3 == 0) {
			std::cout << std::endl;
			std::cout << "------------";
			std::cout << std::endl;
		}
		if (x[i] == 0) {
			std::cout << "   |";
		} else if (x[i] == 1) {
			std::cout << " x |";
		} else {
			std::cout << " O |";
		}
	}

	std::cout << std::endl;
	std::cout << "------------";
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	char x[9] = { 0 };
	for (int i = 0; i < 9; i++) {
		x[i] = 0;
	}
	while (true) {
		int m;
		std::cout << "Введите номер для X: ";
		std::cin >> m;
		while (x[m - 1] != 0) {
			std::cout << "Вы ввели на уже занятую зону, повторите ввод X: ";
			std::cin >> m;
		}
		x[m - 1] = 1;

		printField(x);
		if (x[0] == x[1] && x[0] == x[2] && x[0] == 1) {
			std::cout << "Win " << (x[0] == 1 ? "X" : "O");
			break;
		} else if (x[3] == x[4] && x[3] == x[5] && x[5] == 1) {
			std::cout << "Win " << (x[3] == 1 ? "X" : "O");
			break;
		} else if (x[6] == x[7] && x[7] == x[8] && x[6] == 1) {
			std::cout << "Win " << (x[6] == 1 ? "X" : "O");
			break;
		} else if (x[0] == x[3] && x[3] == x[6] && x[6] == 1) {
			std::cout << "Win " << (x[0] == 1 ? "X" : "O");
			break;
		} else if (x[1] == x[4] && x[4] == x[7] && x[1] == 1) {
			std::cout << "Win " << (x[1] == 1 ? "X" : "O");
			break;
		} else if (x[2] == x[5] && x[5] == x[8] && x[2] == 1) {
			std::cout << "Win " << (x[2] == 1 ? "X" : "O");
			break;
		} else if (x[0] == x[4] && x[0] == x[8] && x[0] == 1) {
			std::cout << "Win " << (x[0] == 1 ? "X" : "O");
			break;
		} else if (x[2] == x[4] && x[2] == x[6] && x[2] == 1) {
			std::cout << "Win " << (x[2] == 1 ? "X" : "O");
			break;
		} else if (x[0] != 0 && x[1] != 0 && x[2] != 0 && x[3] != 0 && x[4] != 0 && x[5] != 0 && x[6] != 0 && x[7] != 0 && x[8] != 0) {
			std::cout << "You have a draw";
			break;
		}
		std::cout << "Введите номер для O: ";
		std::cin >> m;
		while (x[m - 1] != 0) {
			std::cout << "Вы ввели на уже занятую зону, повторите ввод O: ";
			std::cin >> m;
		}
		x[m - 1] = 2;
		printField(x);
	}
	std::cout << std::endl;
	system("pause");
}