#pragma once
#include<iostream>
#include<string>

/*Класс Document : Этот класс будет представлять собой документ,
который обрабатывается в системе документооборота.
Он может содержать поля, такие как id, name, content и status.*/

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


