/*!
	\brief SecretDocument class implementation
	\author Dmitry Kozyrev
	\version 1.6
	\date October 2013
	\details Includes constructor and various methods for working with classes.
*/
#include"SecretDocument.h"
/*!
  \brief Class constructor with parameter
  \param SecretLevel,id,name,content
*/
SecretDocument::SecretDocument(int SecretLevel, int id, std::string name, std::string content)
	:SecretLevel(SecretLevel),Document(id,name,content)
{}
/*!
   Displays This is secret document.
*/
void SecretDocument::print() {
	std::cout << "This is secret document\n";
}
/*!
\brief Returns SecretLevel
	\return SecretLevel
*/
int SecretDocument::GetLevel() {
	return SecretLevel;
}