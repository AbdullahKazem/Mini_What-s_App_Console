#include "Group.h"
#include "User.h"
#include "Chat.h"
#include "Contact.h"
#include <string>
#include <list>
using namespace std;

Group::Group()
{
}

void Group::addContact(Contact gContact) {
	if (groupContacts.empty() == 1) {
		groupContacts.push_back(gContact);
	}
	else {
		list<Contact>::iterator it = groupContacts.begin();
		while (gContact.nameC < it->nameC) {
			it++;
		}
		groupContacts.insert(it, gContact);
	}
}

void Group::removeContact(Contact gContact) {
	list<Contact>::iterator it = groupContacts.begin();
	while (gContact.nameC != it->nameC) {
		it++;
	}
	groupContacts.erase(it);
}


Group::~Group()
{
}
