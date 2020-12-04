#include "AdmissionStaff.h"
#include "cstdlib"
#include "ctime"
#include <list>

struct applicationsorting {
	list<int> admitpile;
	list<int> goodpile;
	list<int> okpile;
};

AdmissionStaff::AdmissionStaff(){
	spotsavailable = 3;									// example 3 spots available in program
}

void AdmissionStaff::AssessEssay(Student student) {
	student.ChangeEssayRank(rand() % 3 + 1);
	cout << "Student " << student.ID << " Essay Ranked: " << student.GetEssayRank();
	student.SortApplication();
}

void AdmissionStaff::Admit() {

	CDataPool dp1("mutex", sizeof(struct applicationsorting));
	struct applicationsorting* dataptr = (struct applicationsorting*)dp1.LinkDataPool();
	
	while (spotsavailable != 0) {
		if (dataptr->admitpile.size() > 0) {												// admit any students with good grades and good essays automatically
			cout << "Admitting student with grade " << dataptr->admitpile.back() << endl;
			dataptr->admitpile.pop_back();
			spotsavailable -= 1;
		}
		else if (dataptr->goodpile.size() > 0) {											// admit student with next highest ranking if spots are still available
			cout << "Admitting student with grade " << dataptr->goodpile.back() << endl;
			dataptr->goodpile.pop_back();
			spotsavailable -= 1;
		}
		else if (dataptr->okpile.size() > 0) {												// admit student with next highest ranking if spots are still available
			cout << "Admitting student with grade " << dataptr->okpile.back() << endl;
			dataptr->okpile.pop_back();
			spotsavailable -= 1;
		}
	}

	///
	/// Want to make it so the student number is displayed instead of the grade percentage... not sure how to do that ///
	///
	
	cout << "all students admitted" << endl;
}
