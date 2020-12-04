#include "Application.h"
#include <list>

struct applicationsorting {
	list<int> admitpile;
	list<int> goodpile;
	list<int> okpile;
};

Application::Application()			// Fill out personal info to application
{
	cout << "Student created application\n";
}

void Application::Sort() {

	cout << "sorting...\n";
	CDataPool dp1("mutex", sizeof(struct applicationsorting));	
	struct applicationsorting* dataptr = (struct applicationsorting*)dp1.LinkDataPool();

	if (average >= 95) {
		dataptr->admitpile.push_back(average);			// high grade = automatic admission
	}
	else if (average > 75 && EssayRank == 3) {			// average grade high essay = admit
		dataptr->admitpile.push_back(average);
	}
	else if (average > 75 && EssayRank == 2) {			// average grade average essay = good pile
		dataptr->goodpile.push_back(average);
	}
	else if (average > 75 && EssayRank == 1) {			// average grade bad essay = okpile
		dataptr->okpile.push_back(average);
	}
	else if (average > 65 && EssayRank == 3) {			// low grade high essay = goodpile
		dataptr->goodpile.push_back(average);
	}
	else if (average > 65 && EssayRank == 2) {			// low grade mediocre essay = okpile
		dataptr->okpile.push_back(average);
	}
	else {
		cout << "sending application to next choice program" << endl;

	}
}
