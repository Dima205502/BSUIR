#pragma once
#include"Document.h"
#include"Time.h"

class Official_document :public Document {
   private:
	   bool hasCaption;  // ����������� ��������� ������ ������������� ��������������� ������
	   Time Start;   // ���� ��������
	   Time Finish;
   public:
	   Official_document(int, std::string, std::string,Time,Time,bool);
	   Time GetStartData();
	   Time GetFinishData();
	   bool HasCaption();

	   bool HasError();
};
