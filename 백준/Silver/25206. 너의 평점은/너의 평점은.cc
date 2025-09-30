#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Course
{
	string name;
	double credit;
	string grade;
};

const string gradeArr[10] = { "A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F", "P" };

void Solution(vector<Course> courses)
{
	double sumScore = 0.0;
	double sumCredit = 0.0;
	for (int i = 0; i < courses.size(); i++)
	{
		double score = 0.0;
		if (courses[i].grade == "P")
			continue;

		if (courses[i].grade == "A+") score = 4.5;
		else if (courses[i].grade == "A0") score = 4.0;
		else if (courses[i].grade == "B+") score = 3.5;
		else if (courses[i].grade == "B0") score = 3.0;
		else if (courses[i].grade == "C+") score = 2.5;
		else if (courses[i].grade == "C0") score = 2.0;
		else if (courses[i].grade == "D+") score = 1.5;
		else if (courses[i].grade == "D0") score = 1.0;
		else if (courses[i].grade == "F")  score = 0.0;
		sumScore += courses[i].credit * score;
		sumCredit += courses[i].credit;
	}
	cout << fixed << setprecision(6) << sumScore / sumCredit << endl;
}

int main()
{
	vector<Course> courses;
	for (int i = 0; i < 20; i++)
	{
		Course tempCourse;
		cin >> tempCourse.name >> tempCourse.credit >> tempCourse.grade;
		courses.push_back(tempCourse);
	}

	Solution(courses);
	return 0;
}
