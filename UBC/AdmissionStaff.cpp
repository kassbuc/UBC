#include "AdmissionStaff.h"
#include "cstdlib"
#include "ctime"
#include <list>


AdmissionStaff::AdmissionStaff() {
}				

void AdmissionStaff::AssessEssay(Student student) {
	srand((unsigned)time(0));
	student.newApplication->EssayRank = (rand() % 3) + 1;
	cout << "Student " << student.ID << " Essay Ranked: " << student.newApplication->EssayRank << endl;
	student.newApplication->Sort();
}

void AdmissionStaff::Admit(Student student) {
	if (spotsavailable != 0) {
		if (student.newApplication->admit > 0) {
			student.newApplication->admit -= 1;
			cout << "student " << student.ID << " admitted from admit pile" << endl;
			spotsavailable -= 1;
			cout << spotsavailable << endl;
		}
		else if (student.newApplication->goodpile > 0) {
			student.newApplication->goodpile -= 1;
			cout << "student " << student.ID << " admitted from good pile" << endl;
			spotsavailable -= 1;
			cout << spotsavailable << endl;
		}
		else if (student.newApplication->okpile > 0) {
			student.newApplication->okpile -= 1;
			cout << "student " << student.ID << " admitted from ok pile" << endl;
			spotsavailable -= 1;
			cout << spotsavailable << endl;
		}
		else {
			cout << "No students admitted" << endl;
		}
	}
}

