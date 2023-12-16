#pragma once
#include<iostream>
#include<string>

/*����� Document : ���� ����� ����� ������������ ����� ��������,
������� �������������� � ������� ����������������.
�� ����� ��������� ����, ����� ��� id, name, content � status.*/

class Document {
public:
	Document(int id, std::string name, std::string content);
	Document() = default;

	virtual void print();
	int getId() const;
	std::string getName() const;
	std::string getContent() const;

	void setName(const std::string&);
	void setContent(const std::string&);
	bool operator==(const Document&);

private:

	int id;
	std::string name;
	std::string content;
};


