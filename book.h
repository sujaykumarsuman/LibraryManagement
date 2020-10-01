#pragma once
class Book{
protected: //will be accessed by the admin class
	int bookNo;
	int qty;
	char bookName[60];
	char author[60];
	char publisher[60];

	void setBook();
	void getBook();
	void printBooks();
	void assignBookNo(int); //will be assigned while creating the object of the book  class
	void setQty();
	const int getQty();
	const int getBookNo();
};