/*!
	\brief Official_document class implementation
	\author Dmitry Kozyrev
	\version 1.6
	\date October 2013
	\details Includes constructor and various methods for working with classes.
*/
#include"Official_document.h"

/*!
  \brief Class constructor with parameter
  \param id,name,content,start,finish,wasCaption
*/
Official_document::Official_document(int id, std::string name, std::string content, Time Start, Time Finish, bool hasCaption)
	: Document(id, name, content), Start(Start), Finish(Finish), hasCaption(hasCaption)
{};
/*!
\brief Returns Start
	\return start
*/
Time Official_document::GetStartData() {
	return Start;
}
/*!
\brief Returns Finish
	\return finish
*/
Time Official_document::GetFinishData() {
	return Finish;
}
/*!
	\brief Returns WasCaption
	\return WasCaption
*/
bool Official_document::HasCaption() {
	return hasCaption;
}
/*!
	\brief Checking error
	\return True if yes, False if no
*/
bool Official_document::HasError() {
	if (Finish < Start) return true;
	return !hasCaption;
}