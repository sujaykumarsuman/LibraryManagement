#include "Menu.h"
#include<iostream>
#include<conio.h>

// Heading
void drawHead()
{
    std::cout << "------------------------------------------------ Central Library ------------------------------------------------\n";
    std::cout << "-----------------------------------------------------------------------------------------------------------------\n\n";
}

int MainMenu(std::string user)
{
    system("cls");
    drawHead();
    std::cout << "Logged in: " << user << "\n\n";
    int opt;
    std::cout << "Select an option:\n\t1) Member Management\n";
    std::cout << "\t2) Book Search\n";
    std::cout << "\t3) Book Transaction\n";
    std::cout << "\t4) Inventory Management\n";
    std::cout << "\t5) Vendor Management\n";
    std::cout << "\t6) Exit\n\n";
    std::cout << user << ":~$ ";
    std::cin >> opt;
    return opt;
}

// Sub Menu
int SubMenu(const std::string& user, int main_opt)
{
    system("cls");
    drawHead();
    std::cout << "Logged in: " << user << "\n\n";
    int opt = 0;
    switch (main_opt)
    {
    case 1:
        std::cout << "Select an option:\n\t1) Add Member\n";
        std::cout << "\t2) Delete Member\n";
        std::cout << "\t3) Notify to return book\n";
        std::cout << "\t4) Previous Menu\n";
        std::cout << "\t5) Exit\n\n";
        std::cout << user << "@MemberManagement:~$ ";
        std::cin >> opt;
        return opt;
        break;
    case 2:
        std::cout << "Select an option:\n\t1) Search by Title\n";
        std::cout << "\t2) Search by Author\n";
        std::cout << "\t3) Search by Issue Number\n";
        std::cout << "\t4) Previous Menu\n";
        std::cout << "\t5) Exit\n\n";
        std::cout << user << "@BookSearch:~$ ";
        std::cin >> opt;
        return opt;
        break;
    case 3:
        std::cout << "Select an option:\n\t1) Checkout Book\n";
        std::cout << "\t2) Reserve Book\n";
        std::cout << "\t3) Delete Reservation\n";
        std::cout << "\t4) Return Book\n";
        std::cout << "\t5) Previous Menu\n";
        std::cout << "\t6) Exit\n\n";
        std::cout << user << "@BookTransaction:~$ ";
        std::cin >> opt;
        return opt;
        break;
    case 4:
        std::cout << "Select an option:\n\t1) Books by Title\n";
        std::cout << "\t2) Books by Author\n";
        std::cout << "\t3) Add a Book\n";
        std::cout << "\t4) Remove a Book\n";
        std::cout << "\t5) Previous Menu\n";
        std::cout << "\t6) Exit\n\n";
        std::cout << user << "@Inventory:~$ ";
        std::cin >> opt;
        return opt;
        break;
    case 5:
        std::cout << "Select an option:\n\t1) Order Books\n";
        std::cout << "\t2) Add Vendor\n";
        std::cout << "\t3) Remove Vendor\n";
        std::cout << "\t4) Cancel Order\n";
        std::cout << "\t5) Request other Libraries for Books\n";
        std::cout << "\t6) Previous Menu\n";
        std::cout << "\t7) Exit\n\n";
        std::cout << user << "@VendorManagement:~$ ";
        std::cin >> opt;
        return opt;
        break;
    case 6:
        system("cls");
        drawHead();
        std::cout << "Program Closed...\n";
        return opt;
        exit(0);
    default:
        std::cout << "Option not valid!\nPress any key to continue...";
        _getch();
    }
    return opt;
}