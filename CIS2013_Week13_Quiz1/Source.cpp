#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class BankAccount {
public :
	string name, acct_number, phone;
	int balance = 0, rate;

	int deposit() {
		;
	}

	int withdraw() {
		;
	}
	int balance() {
		;
	}
};

class Savings : public BankAccount {
public:
	int minimum_balance, withdraw_limit;

	
};

class Checking : public BankAccount {
public:
	int overdraft_fee;

};

int main() {
	int input = 0;
	while (input != 5) {
		cout << "Welcome to bank CIS2013\nWhat would you like to do?\n1)Open new account\n2)Make a deposit\n3)Make a withdraw\n4)Check Total\n5)Exit\n";
		cin >> input;
		if (input = 1) {
			;
		}
		else if (input = 2) {
			;
		}
		else if (input = 3) {
			;
		}
		else if (input = 4) {
			;
		}
		else if (input = 5) {
			;

		}
		else {
			cout << "Invalid\n";
		}

	}
}
