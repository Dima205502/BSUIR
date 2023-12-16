#pragma once
#include"Document.h"
#include"Time.h"

class Official_document :public Document {
   private:
	   bool hasCaption;  // ќфициальные документы обычно подписываютс€ уполномоченными лицами
	   Time Start;   // срок действи€
	   Time Finish;
   public:
	   Official_document(int, std::string, std::string,Time,Time,bool);
	   Time GetStartData();
	   Time GetFinishData();
	   bool HasCaption();

	   bool HasError();
};
