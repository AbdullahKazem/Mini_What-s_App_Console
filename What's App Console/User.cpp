#include "User.h"
#include <string>
#include <list>	
#include "Contact.h"
#include "Group.h"
using namespace std;

User::User()
{
}

void User::insertContact(Contact inUser) {
	if (userContacts.empty() == 1) {
		userContacts.push_back(inUser);
	}
	else {
		list<Contact>::iterator it = userContacts.begin();
		while (inUser.nameC < it->nameC) {
			it++;
		}
		userContacts.insert(it, inUser);

	}
}

void User::removeContact(Contact inUser) {
	list<Contact>::iterator it = userContacts.begin();
	while (inUser.nameC != it->nameC) {
		it++;
	}
	userContacts.erase(it);
}

void User::addGroup(Group userGroup) {
	if (groups.empty() == 1) {
		groups.push_back(userGroup);
	}
	else {
		list<Group>::iterator it = groups.begin();
		while (userGroup.gName != it->gName) {
			it++;
		}
		groups.insert(it,userGroup);
	}
}

void User::removeGroup(Group userGroup) {

	list<Group>::iterator it = groups.begin();
	while (userGroup.gName != it->gName) {
		it++;
	}
	groups.erase(it);
}

User::~User()
{
}
