/*!
    \brief User class implementation
    \author Dmitry Kozyrev
    \version 1.6
    \date October 2013
    \details Includes constructor and various methods for working with classes.
*/

#include "User.h"

int User::cnt = 0;
/*!
  \brief Class constructor with parameter
  \param name,email
*/
User::User(std::string name, std::string email) : name(name), email(email) { 
    cnt++;
    number = cnt;
}

/*!
\brief Returns name
    \return name
*/
std::string User::getName() { 
    return name; 
}
/*!
\brief Returns size for list document
    \return documents.size()
*/
int User::GetCntDocument() {
    return documents.size();
}
/*!
\brief Returns number
    \return number
*/
int User::GetNumber() const{
    return number;
}
/*!
\brief Change name
*/
void User::setName(std::string name) {
    this->name = name; 
}
/*!
\brief Returns email
    \return email
*/
std::string User::getEmail() { 
    return email; 
}
/*!
\brief Change email
*/
void User::setEmail(std::string email) {
    this->email = email; 
}

/*!
\brief Add document in list documents
*/
void User::addDocument(Document document) { 
    documents.push_back(document); 
}
/*!
\brief Remove document
*/
void User::removeDocument(Document doc) {
    auto it = documents.begin();
    while(it!=documents.end()){
        if (*it == doc) {
            documents.erase(it);
            return;
        }
    }
}

/*!
\brief Returns vector<document>
    \return vector<document>
*/
std::vector<Document> User::getDocuments() { return documents; }

/*!
   Displays info about user.
*/
void User::displayInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Count documents: "<<documents.size()<<std::endl;
    std::cout << std::endl;
}
/*!
    \brief Checking User for less
    \param left_user,right_user
    \return True if less, False if equal or more
*/
bool operator<(const User& Left,const User& Right) {
    return Left.GetNumber() < Right.GetNumber();
}