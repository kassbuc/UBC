#include "Application.h"

Application::Application()			// Fill out personal info to application
{

}

void Application::Submit() {
	cout << "Application submitted.. Waiting on acceptance" << endl;
}

void Application::Sort() {
	if (average > 95) {
		admitpile.push_back(average);
	}
	else if (average > 75) {
		goodpile.push_back(average);
		if (EssayRank > 3) {
			admitpile.push_back(average);
		}
	}
	else if (average > 65) {
		okpile.push_back(average);
		if (EssayRank > 3) {
	}
	else {
		cout << "sending application to next choice program" << endl;

	}
}
