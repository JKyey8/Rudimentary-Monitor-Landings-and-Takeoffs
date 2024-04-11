#include <iostream>
#include <string>
using namespace std;

struct Airport {
	string Month;
	int MonthLandings;
	int MonthTakeoffs;
	int MostLandingsDay;
	int LeastLandingsDay;

};



int main() {
	cout << "Student Name: Jacob Kyeyune \n";
	cout << "Student ID: 900875857 \n \n";

	
	Airport months[12];
	months[0].Month = "January";
	months[1].Month = "Febuary";
	months[2].Month = "March";
	months[3].Month = "April";
	months[4].Month = "May";
	months[5].Month = "June";
	months[6].Month = "July";
	months[7].Month = "August";
	months[8].Month = "September";
	months[9].Month = "October";
	months[10].Month = "November";
	months[11].Month = "December";

	int AverageLandings;
	int AverageDepartures;
	int TotalLandings = 0;
	int TotalDeparture = 0;
	int MostLandings = 0 ;
	int LeastLandings = 2147483640;
	string MostLandingsMonth;
	string LeastLandingsMonth;



	for (int i = 0; i < 12; i++) {
		cout << "Please enter the number of planes that landed in " << months[i].Month << ":";
		cin >> months[i].MonthLandings;
		cout << "Please enter the number of planes that departed in: " << months[i].Month << ":";
		cin >> months[i].MonthTakeoffs;
		cout << "Please enter the greatest number of planes that landed on a single day in: " << months[i].Month << ":";
		cin >> months[i].MostLandingsDay;
		cout << "Please enter the least number of planes that landed on a single day in: " << months[i].Month << ":";
		cin >> months[i].LeastLandingsDay;


		TotalLandings = TotalLandings + months[i].MonthLandings;
		TotalDeparture = TotalDeparture + months[i].MonthTakeoffs;

	}
	AverageLandings = TotalLandings / 12;
	AverageDepartures = TotalDeparture / 12;

	cout << "The average monthly landings for the year is " << AverageLandings;
	cout << "\nThe average monthly departures for the year is " << AverageDepartures;
	cout << "\nThe total landings for the year is " << TotalLandings;
	cout << "\nThe total departures for the year is " << TotalDeparture;
	for (int i = 0; i < 12; i++) {
		if (months[i].MostLandingsDay > MostLandings){
			MostLandings = months[i].MostLandingsDay;
		MostLandingsMonth = months[i].Month;
		}



		if (months[i].LeastLandingsDay < LeastLandings) {
			LeastLandings = months[i].LeastLandingsDay;
			LeastLandingsMonth = months[i].Month;
		
		
		}
	}

	cout << "\nThe greatest number of planes that landed in a single day is " << MostLandings << " which occured in the month of " << MostLandingsMonth;
	cout << "\nThe least number of planes that landed in a single day is " << LeastLandings << " which occured in the month of " << LeastLandingsMonth << "\n";






	cin.get();
	cin.ignore();


	return 0;
}