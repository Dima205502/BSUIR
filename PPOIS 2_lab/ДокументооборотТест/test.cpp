#include "pch.h"

#include"C:\PPOIS_2lab\Документооборот\Document.cpp"

TEST(TestDocument, TestGetter) {
	Document a(3, "Ivan", "I Work");

    EXPECT_EQ(a.getId(), 3);
    EXPECT_EQ(a.getName(), "Ivan");
    EXPECT_EQ(a.getContent(), "I Work");

    EXPECT_TRUE(true);
}


TEST(TestDocument, TestSetter) {
    Document a(3, "Ivan", "I Work");
    a.setName("Dima");
    a.setContent("I sleep");

    EXPECT_EQ(a.getName(), "Dima");
    EXPECT_EQ(a.getContent(), "I sleep");

    EXPECT_TRUE(true);
}

TEST(TestDocument, TestOperator) {
    Document a(3, "Ivan", "I Work"),b(3,"Ivan","I Work");

    EXPECT_TRUE(a == b);

    EXPECT_TRUE(true);
}

#include"C:\PPOIS_2lab\Документооборот\Invoice.cpp"

TEST(TestInvoice, TestGetSum) {
    Invoice a(100, 3, "Ivan", "I Work");

    EXPECT_EQ(a.GetSum(), 100);

    EXPECT_TRUE(true);
}

#include"C:\PPOIS_2lab\Документооборот\Time.cpp"

TEST(TestTime, TestGetter) {
    Time a(2023, 11, 21);

    EXPECT_EQ(a.GetYear(), 2023);
    EXPECT_EQ(a.GetMonth(), 11);
    EXPECT_EQ(a.GetDay(), 21);

    EXPECT_TRUE(a.CorrectData());

    a.SetYear(2023);
    a.SetMonth(11);
    a.SetDay(-12);

    EXPECT_FALSE(a.CorrectData());

    EXPECT_TRUE(true);
}

#include"C:\PPOIS_2lab\Документооборот\Official_document.cpp"

TEST(TestOfficialDocument, TestGetter) {
    Time start(2023, 10, 15);
    Time finish(2023, 12, 28);

    Official_document a(3,"Ivan","I Work",start,finish,true);

    EXPECT_EQ(a.GetStartData(),start);
    EXPECT_EQ(a.GetFinishData(), finish);
    EXPECT_TRUE(a.HasCaption());

    EXPECT_TRUE(true);
}

TEST(TestOfficialDocument, TestCheckError) {
    Time start(2023, 10, 15);
    Time finish(2023, 12, 28);

    Official_document a(3, "Ivan", "I Work", start, finish, true);

    EXPECT_FALSE(a.HasError());

    EXPECT_TRUE(true);
}

#include"C:\PPOIS_2lab\Документооборот\SecretDocument.cpp"


TEST(TestSecretDocument, TestGetter) {
    SecretDocument a(2, 3, "Ivan", "I am Agent");

    EXPECT_EQ(a.GetLevel(), 2);
    EXPECT_TRUE(true);
}

#include"C:\PPOIS_2lab\Документооборот\User.cpp"

TEST(TestUser, TestGetter) {
    User a("Ivan", "@Ivan2003.com");
    User b("Dima", "Kozyrev2001.by");

    EXPECT_EQ(a.GetNumber(), 1);
    EXPECT_EQ(b.GetNumber(), 2);

    EXPECT_EQ(a.getName(), "Ivan");
    EXPECT_EQ(a.getEmail(), "@Ivan2003.com");

    a.setName("Ira");
    a.setEmail("@irishka_chiki_piki.com");

    EXPECT_EQ(a.getName(), "Ira");
    EXPECT_EQ(a.getEmail(), "@irishka_chiki_piki.com");

    EXPECT_TRUE(true);
}

TEST(TestUser, TestAddElement) {
    User a("Ivan", "@Ivan2003.com");

    Document A1(1, "Ivan", "I work"),A2(2,"Dash","I sleep");

    EXPECT_EQ(a.GetCntDocument(), 0);

    a.addDocument(A1);

    EXPECT_EQ(a.GetCntDocument(), 1);

    a.addDocument(A2);

    EXPECT_EQ(a.GetCntDocument(), 2);

    EXPECT_TRUE(true);
}

TEST(TestUser, TestRemoveElement) {
    User a("Ivan", "@Ivan2003.com");

    Document A1(1, "Ivan", "I work"), A2(2, "Dash", "I sleep");

    a.addDocument(A1);

    a.addDocument(A2);

    EXPECT_EQ(a.GetCntDocument(), 2);

    a.removeDocument(A1);

    EXPECT_EQ(a.GetCntDocument(), 1);

    EXPECT_TRUE(true);
}

#include"C:\PPOIS_2lab\Документооборот\DocumentSystem.cpp"

TEST(TestDocumentSystem, TestRemoveElement) {
    DocumentSystem a("AlfaBank");

    EXPECT_EQ(a.getSystemName(), "AlfaBank");

    EXPECT_TRUE(true);
}

#include"C:\PPOIS_2lab\Документооборот\User_documents.cpp"

TEST(TestUser_documents, Test) {
    User_documents a("Tincoff");

    EXPECT_EQ(a.getSystemName(), "Tincoff");

    User A("Ivan", "@Ivan2003.com");
    Document B(3, "Ivan", "I Work");

    a.UpdateUserDocument(A, B);

    Document res;
    res = a.Find_Doc(A);

    EXPECT_TRUE(res == B);

    EXPECT_TRUE(true);
}





