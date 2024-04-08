#pragma once
#include <string>
#include <list>
#include "User.h"
#include "Chat.h"
#include "Contact.h"
using namespace std;
class Group
{
public:

	Group();
	string gName;
	int groupId;
	User admin;
	Chat groupChat;
	list <Contact> groupContacts;
	void addContact(Contact);
	void removeContact(Contact);
	~Group();
};

