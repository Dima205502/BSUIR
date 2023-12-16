/*!
	\brief Invoice class implementation
	\author Dmitry Kozyrev
	\version 1.6
	\date October 2013
	\details Includes constructor and various methods for working with classes.
*/

#include"Invoice.h"

/*!
  \brief Class constructor with parameter
  \param sum,id,name,content
*/
Invoice::Invoice(int sum, int id, std::string name, std::string content)
	: sum(sum), Document(id, name, content)
{}
/*!
   Displays This is Invoice.
*/
void Invoice::print() {
	std::cout << "This is Invoice\n";
}
/*!
\brief Returns Sum
	\return Sum
*/
int Invoice::GetSum() const{
	return sum;
}

