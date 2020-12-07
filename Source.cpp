#include "MainHeader.h"

void printHelp() {

	cout << " ? 'help', 'h' - вывести информационное сообщение" << endl
		<< " ?  'quit', 'q' - выход из программы" << endl
		<< " ? 'clear', 'cl' - очистка консоли" << endl;

}

void taskList() {

	cout << " ? 't1', 'task01' - задача #01: "
		<< "Написать программу определяющую чередование положительных/отрцательных чисел в массиве." << endl
		<< " ? 't2', 'task02' - задача #02: "
		<< "Написать программу, осуществляющую циклический сдвиг в массиве. \n" << endl;
		
	printHelp();
}

int main() {
	setlocale(LC_ALL, "Russian");

	string command = "quit";
	taskList();

	while (true) {
		cout << endl << " @ Введите команду:" << "\n > ";
		cin >> command;
		cout << endl;

		if (command == "help" || command == "h") {
			printHelp();
		}
		else if (command == "quit" || command == "q") {
			cout << " > Завершение работы" << endl;
			break;
		}
		else if (command == "clear" || command == "cl") {
			system("cls");
		}
		else if (command == "t1" || command == "task01") {
			cout << "# Задача 1" << endl;
			task01();
		}
		else if (command == "t2" || command == "task02") {
			cout << "# Задача 2" << endl;
			task02();
		}
	}
	return 0;
}
