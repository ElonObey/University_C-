#include "MainHeader.h"

void printHelp() {

	cout << " ? 'help', 'h' - ������� �������������� ���������" << endl
		<< " ?  'quit', 'q' - ����� �� ���������" << endl
		<< " ? 'clear', 'cl' - ������� �������" << endl;

}

void taskList() {

	cout << " ? 't1', 'task01' - ������ #01: "
		<< "�������� ��������� ������������ ����������� �������������/������������ ����� � �������." << endl
		<< " ? 't2', 'task02' - ������ #02: "
		<< "�������� ���������, �������������� ����������� ����� � �������. \n" << endl;
		
	printHelp();
}

int main() {
	setlocale(LC_ALL, "Russian");

	string command = "quit";
	taskList();

	while (true) {
		cout << endl << " @ ������� �������:" << "\n > ";
		cin >> command;
		cout << endl;

		if (command == "help" || command == "h") {
			printHelp();
		}
		else if (command == "quit" || command == "q") {
			cout << " > ���������� ������" << endl;
			break;
		}
		else if (command == "clear" || command == "cl") {
			system("cls");
		}
		else if (command == "t1" || command == "task01") {
			cout << "# ������ 1" << endl;
			task01();
		}
		else if (command == "t2" || command == "task02") {
			cout << "# ������ 2" << endl;
			task02();
		}
	}
	return 0;
}
