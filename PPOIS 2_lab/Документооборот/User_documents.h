#pragma once

#include<map>
#include"DocumentSystem.h"
#include"User.h"
#include"Document.h"

class User_documents : public DocumentSystem{
private:

	std::map<User,Document> a;

public:

	User_documents(std::string);

	Document Find_Doc(User);

	void UpdateUserDocument(User, Document);

	void ShowInfo() override;
};