#include<iostream>
#include<fstream>
#include "Member.h"

bool Member::operator==(const Member& obj)
{
    return (user_id == obj.user_id) && (password == obj.password);
}

// Modifying insertion operator for writing object to Members.txt
std::ostream& operator<<(std::ostream& out, const Member& obj)
{
    out << obj.user_id << "\n" << obj.password << "\n";
    return out;
}

// Modifying extraction operator for reading object from MembersDB.txt
std::istream& operator>>(std::istream& in, Member& obj)
{
    in >> obj.user_id;
    in >> obj.password;
    return in;
}

// To get User name of Member object
std::string Member::get_uid()
{
    return user_id;
}

// Add new Member to MembersDB.txt
int addMember(Member& user)
{
    std::ofstream db("MembersDB.txt", std::ios::app);
    db << user;
    std::cout << "User added successfully!\n";
    return 0;
}