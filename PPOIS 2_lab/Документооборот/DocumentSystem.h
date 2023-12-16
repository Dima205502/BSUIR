#pragma once

#include <vector>
#include "Document.h"

//Класс DocumentSystem: Этот класс будет представлять собой систему документооборота. 
//Он может содержать поля, такие как id, name и documents, где documents - это список документов,обрабатываемых в системе.


class DocumentSystem {
public:

	DocumentSystem(std::string);

	std::string getSystemName();

	void addDocument(Document doc);

	std::vector<Document> getAllDocuments();

	virtual void ShowInfo();

private:

	std::string SystemName;

	std::vector<Document> documents;
};

