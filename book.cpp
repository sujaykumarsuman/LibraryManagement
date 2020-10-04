#include<iostream>
#include<fstream>
#include "book.h"
void Book::setBook(){
	std::cout<<"Enter the Book Details \n";
	std::cout<<"Enter the Book Name:";
	std::cin.getline(bookName,60);
	//get the name of the book in CAPS
	for(int i=0;bookName[i]!='\0';i++){
		if(bookName[i]>=97 and bookName[i]<=122)
			bookName[i]-=32;
	}
	std::cout<<"Enter the Author's Name:";
	std::cin.getline(author,60);
	std::cout<<"Enter teh Publication's Details:";
	std::cin.getline(publisher,60);
	std::cout<<"Enter the Number of Copies Available";
	std::cin>>qty;

	std::cout<<"\n\n Record Added Successfully!";
}
void Book::getBook(){
	std::cout<<"Book Number: "<<bookNo<<"\n";
	std::cout<<"Book Name: "<<bookName<<"\n";
	std::cout<<"Author: "<<author<<"\n";
	std::cout<<"Publication: "<<publisher<<"\n";
	std::cout<<"Quantity: "<<qty<<"\n";
}
void Book::printBooks(){
	std::cout<<bookNo<<"\t"<<bookName<<"\t"<<author<<"\t"<<publisher<<"\t"<<qty<<"\n";
}
void Book::assignBookNo(int pos){ // accepts the initial position 
	int bookNo=1001;
	bookNo+=pos-1;
}
void Book::setQty(){
	qty-=1;
}
const int Book::getQty(){
	return qty;
}
const int Book::getBookNo(){
	return bookNo;
}