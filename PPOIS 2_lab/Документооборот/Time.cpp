/*!
	\brief Time class implementation
	\author Dmitry Kozyrev
	\version 1.6
	\date October 2013
	\details Includes constructor and various methods for working with classes.
*/

#include"Time.h"

/*!
  \brief Class constructor with parameter
  \param year,month,day
*/
Time::Time(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}
/*!
\brief Returns year
	\return year
*/
int Time::GetYear() const{
	return year;
}
/*!
\brief Returns month
	\return month
*/
int Time::GetMonth() const{
	return month;
}
/*!
\brief Returns day
	\return day
*/
int Time::GetDay() const{
	return day;
}
/*!
\brief Change year
*/
void Time::SetYear(int year) {
	this->year=year;
}
/*!
\brief Change month
*/
void Time::SetMonth(int month) {
	this->month=month;
}
/*!
\brief Change day
*/
void Time::SetDay(int day) {
	this->day=day;
}
/*!
	\brief Checking CorrectData
	\return True if yes, False if no
*/
bool Time::CorrectData() const{
	return 0 <= year && year<=2023 && 1 <= month && month <= 12 && 1 <= day && day <= 31;
}
/*!
	\brief Checking Time for less
	\param other_time
	\return True if less, False if equal or more
*/
bool Time::operator<(Time other) {
	if (year == other.year) {
		if (month == other.month) {
			return day < other.day;
		}
		else {
			return month < other.month;
		}
	}
	else {
		return year < other.year;
	}
}
/*!
	\brief Checking Time for Equality
	\param left_time,right_time
	\return True if yes, False if no
*/
bool operator==(const Time& left,const Time& right) {
	return left.GetYear() == right.GetYear() && left.GetMonth() == right.GetMonth() && left.GetDay() == right.GetDay();
}
