#include "UnitTest.h"


// Test the Application.Sort() method
UnitTest::UnitTest()
{

	// Student with 95+ average should be sorted to admit pile
	Student student1(95, 123456);
	student1.WriteApplication();
	student1.newApplication->Sort();
	assert(student1.newApplication->admit == 1);

	//Student with above 75 average and essay rank 3 should be sorted to admit pile
	Student student2(76, 394839);
	student2.WriteApplication();
	student2.newApplication->EssayRank = 3;
	student2.newApplication->Sort();
	assert(student2.newApplication->admit == 1);

	//Student with above 75 average and essay rank 2 should be sorted to good pile
	Student student3(76, 384839);
	student3.WriteApplication();
	student3.newApplication->EssayRank = 2;
	student3.newApplication->Sort();
	assert(student3.newApplication->goodpile == 1);

	//Student with above 75 average and essay rank 1 should be sorted to ok pile
	Student student4(76, 384589);
	student4.WriteApplication();
	student4.newApplication->EssayRank = 1;
	student4.newApplication->Sort();
	assert(student4.newApplication->okpile == 1);

	//Student with above 65 average and essay rank 3 should be sorted to good pile
	Student student5(67, 383089);
	student5.WriteApplication();
	student5.newApplication->EssayRank = 3;
	student5.newApplication->Sort();
	assert(student5.newApplication->goodpile == 1);

	//Student with above 65 average and essay rank 2 should be sorted to ok pile
	Student student6(67, 383999);
	student6.WriteApplication();
	student6.newApplication->EssayRank = 2;
	student6.newApplication->Sort();
	assert(student6.newApplication->okpile == 1);
	
}
