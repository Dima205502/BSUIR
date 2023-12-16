#pragma once
#include"Document.h"
class Invoice : public Document {
private:

    int sum;

public:

    Invoice(int sum, int id, std::string name, std::string content);

    void print() override;

    int GetSum() const;
};
