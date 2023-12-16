/*!
	\brief DocumentSystem class implementation
	\author Dmitry Kozyrev
	\version 1.6
	\date October 2013
	\details Includes constructor and various methods for working with classes.
*/

#include"DocumentSystem.h"
/*!
   Displays info abot the current documents in system
*/
void DocumentSystem::ShowInfo() {
	std::cout << "Document System name is" << SystemName << '\n';
	std::cout << "document names\n";
	for (auto x : documents) {
		std::cout << "name " << x.getName() << '\n';
	}
}
/*!
\brief Returns SystemName
	\return SystemName
*/
std::string DocumentSystem::getSystemName() {
	return SystemName;
}

/*!
  \brief Class constructor with parameter
  \param SystemName
*/
DocumentSystem::DocumentSystem(std::string SystemName)
	: SystemName(SystemName)
{}
/*!
\brief add document in list
*/
void DocumentSystem::addDocument(Document doc) {
	documents.push_back(doc);
}
/*!
\brief Returns the list documents
	\return vector<document>
*/
std::vector<Document> DocumentSystem::getAllDocuments() {
	return documents;
}