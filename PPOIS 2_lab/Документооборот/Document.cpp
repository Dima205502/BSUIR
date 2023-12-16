/*!
	\brief Document class implementation
	\author Dmitry Kozyrev
	\version 1.6
	\date October 2013
	\details Contains designer and various methods for working with class.
*/

#include "Document.h"

/*!
	\brief Checking Documents for Equality
	\param left_document,right_document
	\return True if yes, False if no
*/

bool operator==(const Document& left, const Document& right) {
	return left.getId() == right.getId() && left.getContent() == right.getContent() && left.getName() == right.getName();
}

/*!
  \brief Class constructor with parameters
  \param id,name,content.
*/

Document::Document(int id, std::string name, std::string content)
	: id(id), name(name), content(content) {}

/*!
   Displays This is document
*/
void Document::print(){
	std::cout <<"This is document!\n";
}
/*!
\brief Returns Id
	\return id
*/
int Document::getId() const {
	return id;
}
/*!
\brief Returns the string name
	\return name
*/
std::string Document::getName() const {
	return name;
}
/*!
\brief Returns the string with content
	\return content
*/
std::string Document::getContent() const {
	return content;
}
/*!
\brief Change name
*/
void Document::setName(const std::string& name) {
	this->name = name;
}
/*!
\brief Change content
*/
void Document::setContent(const std::string& content) {
	this->content = content;
}
/*!
	\brief Checking Documents for Equality
	\param other_document
	\return True if yes, False if no
*/
bool Document::operator==(const Document& other) {
	return other.id == id && other.name == name && other.content == content;
}
