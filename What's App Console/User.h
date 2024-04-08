#pragma once
#include <string>
#include <list>
#include "Contact.h"
#include "Group.h"
using namespace std;

class User{
public:
	string userName;
	int phone;
	list <Contact> userContacts;
	list <Group> groups;
	int IdjGroup;
	User();	
	void insertContact(Contact inUser);
	void removeContact(Contact inUser);
	void addGroup(Group userGroup);
	void removeGroup(Group userGroup);
	~User();
};
