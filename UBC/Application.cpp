#include "Application.h"
#include <list>


Application::Application()			// Fill out personal info to application
{
	cout << "Student created application\n";
}

void Application::Sort() {
	cout << "Sorting application\n";
	if (average >= 95) {
		cout << "send to admit pile\n";
		admit += 1;
	}
	else if (average > 75 && EssayRank == 3) {			// average grade high essay = admit
		cout << "send to admit pile\n";
		admit += 1;
	}
	else if (average > 75 && EssayRank == 2) {			// average grade average essay = good pile
		cout << "send to good pile\n";
		goodpile += 1;
	}
	else if (average > 75 && EssayRank == 1) {			// average grade bad essay = okpile
		cout << "send to ok pile\n";
		okpile += 1;
	}
	else if (average > 65 && EssayRank == 3) {			// low grade high essay = goodpile
		cout << "send to good pile\n";
		goodpile += 1;
	}
	else if (average > 65 && EssayRank == 2) {			// low grade mediocre essay = okpile
		cout << "send to ok pile\n";
		okpile += 1;
	}
	else {
		cout << "sending application to next choice program" << endl;
	}
}
