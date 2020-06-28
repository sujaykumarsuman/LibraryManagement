#include <iostream>
#include <fstream>
#include <conio.h>
#include "Member.h"
#include "Menu.h"

// Book
class Book
{
    std::string title, author;
    int64_t issue_no;

public:
    Book(std::string m_title = "", std::string m_auth = "", int64_t issue = 0) : title(m_title), author(m_auth), issue_no(issue) {}
};

void getLoginDetails(std::string &uid, std::string &pswd)
{
    std::cout << "Username: ";
    std::cin >> uid;
    std::cout << "Password: ";
    std::cin >> pswd;
}

// Validate Login Details
bool validate(Member &user)
{
    std::ifstream db("MembersDB.txt");
    Member obj;
    while (!db.eof())
    {
        db >> obj;
        if (obj == user)
            return true;
    }
    return false;
}

// Login
Member Login()
{
    std::cout << "Login---\n";
    std::string username, passwd;
    getLoginDetails(username, passwd);
    Member user(username, passwd);
    if (!validate(user))
    {
        system("cls");
        drawHead();
        std::cout << "Invalid details!\n\n";
        Login();
    }
    return user;
}

// Driver Function
int main()
{
    // Login Screen
    drawHead();
    Member user = Login();
    int main_opt = 0, sub_opt = 0;
    while (main_opt != 6)
    {
        main_opt = MainMenu(user.get_uid());
        sub_opt = SubMenu(user.get_uid(), main_opt);
        switch (main_opt)
        {
        case 1:
            // TODO: Add Member Manager
            //MemberManager(sub_opt);
            break;
        case 2:
            // TODO: Add Book Search Functionality
            //BookSearch(sub_opt);
            break;
        case 3:
            // TODO: Add Book Transaction Feature
            //BookTransaction(sub_opt);
            break;
        case 4:
            // TODO: Add Inventory Manager
            //Inventory(sub_opt);
            break;
        case 5:
            // TODO: Add Vendor Manager
            //Vendor(sub_opt);
            break;
        }
    }

    return 0;
}
