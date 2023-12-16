#pragma once
#include"Document.h"
#include<iostream>
#include<string>
#include<vector>


class User {
private:
    int  number;
    std::string name;
    std::string email;
    std::vector<Document> documents;
    static int cnt;

public:
    User(std::string name, std::string email);
    // ������� � �������
    std::string getName();

    void setName(std::string);

    std::string getEmail();

    void setEmail(std::string);

    // ������ ��� ������ � �����������
    void addDocument(Document);

    void removeDocument(Document);

    int GetCntDocument();

    std::vector<Document> getDocuments();

    int GetNumber() const;

    // ����� ��� ����������� ���������� � ������������
    void displayInfo();
};

bool operator<(const User&,const User&);

