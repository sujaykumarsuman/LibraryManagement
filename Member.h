#pragma once
#include<string>

class Member
{
    std::string user_id, password;
public:
    Member(std::string id = "", std::string pw = ""):user_id(id), password(pw) {}

    bool operator==(const Member& obj);

    // Modifying insertion operator for writing object to Members.txt
    friend std::ostream& operator << (std::ostream& out, const Member& obj);

    // Modifying extraction operator for reading object from MembersDB.txt
    friend std::istream& operator >> (std::istream& in, Member& obj);

    // To get User name of Member object
    std::string get_uid();
};

int addMember(Member& user);