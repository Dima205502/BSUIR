#pragma once

#include <vector>
#include "Document.h"

//����� DocumentSystem: ���� ����� ����� ������������ ����� ������� ����������������. 
//�� ����� ��������� ����, ����� ��� id, name � documents, ��� documents - ��� ������ ����������,�������������� � �������.


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

