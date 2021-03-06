/*
 * Depositor.h
 * Author: suyashd95
 */

#ifndef DEPOSITOR_H_
#define DEPOSITOR_H_

class Depositor {

private:
	std::string name;
	int accountNumber;
	int accountType;
	double balance;

public:
	Depositor() : name(""), accountNumber(0), accountType(0), balance(0.00) {};
	Depositor(std::string name, int accountNo, int accountType, double balance) : name(name), accountNumber(accountNo), accountType(accountType), balance(balance) {};
	void assignInfo(std::string name, int accountNo, int accountType, double balance);
	void depositAmount(double amount);
	void withdrawAmount(double amount);
	void displayInfo();
};

namespace modclasses {

class Depositor {

private:
	static int const size;
	std::string name[10];
	int accountNumber[10];
	int accountType[10];
	double balance[10];

public:
	Depositor();
	void assignInfo();
	void depositAmount(double amount);
	void withdrawAmount(double amount);
	void displayInfo();
};

} /* namespace modclasses */

#endif /* DEPOSITOR_H_ */

