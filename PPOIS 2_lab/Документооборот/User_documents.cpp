/*!
	\brief User_documents class implementation
	\author Dmitry Kozyrev
	\version 1.6
	\date October 2013
	\details Includes constructor and various methods for working with classes.
*/

#include"User_documents.h"


/*!
	\brief find_document
	\param document
	\return document
*/
Document User_documents::Find_Doc(User us) {
	if (a.count(us) == 0) return Document();
	return a[us];
};

/*!
  \brief Class constructor with parameter
  \param name
*/
User_documents::User_documents(std::string name) : DocumentSystem(name)
{};
/*!
	\brief Update document
*/
void User_documents::UpdateUserDocument(User us, Document doc) {
	a[us] = doc;
}
/*!
   Displays info documents.
*/
void User_documents::ShowInfo() {
	for (auto it = a.begin();it!=a.end();++it) {
		User us = it->first;
		Document doc = it->second;
		std::cout << "Username = " << us.getName() << ' ' << "DocumentContent " << doc.getContent()<<'\n';
	}
}
