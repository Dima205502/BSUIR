#pragma once
#include"Document.h"

class SecretDocument : private Document {
public:

	SecretDocument(int, int,std::string, std::string);

	void print() override;

	int GetLevel();

private:
	int SecretLevel;

};
