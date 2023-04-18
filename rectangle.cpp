/// \file rectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///
//test
#include<iostream>
#include "Rectangle.h"

/// @brief default constructor 
Rectangle::Rectangle() {

	cout << "Rectangle - constructor - default" << endl;

	width = 0;
	length = 0;

}

/// @brief constructor 
/// @param w width in pixels
/// @param h length in pixels
Rectangle::Rectangle(int w, int l) {

	width = 0;
	length = 0;

	cout << "Rectangle - constructor" << endl;

	if (w <= 0)
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		width = w;

	if (l <= 0)
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		length = l;



}

/// @brief destructor 
Rectangle::~Rectangle() {

	cout << "Rectangle - destructor" << endl;

}


/// @brief set width of the object
/// @param w width in pixels
void Rectangle::SetWidth(int w) {

	if (w < 0) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	width = w;

}

/// @brief set length of the object
/// @param l length in pixels
void Rectangle::SetLength(int l) {

	if (l < 0) {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}

	length = l;

}

/// @brief set width and length of the object
/// @param w width in pixels
/// @param l length in pixels
void Rectangle::SetDim(int w, int l) {

	SetWidth(w);
	SetLength(w);
}


/// @brief set width of the object
/// @param w width in pixels
int Rectangle::GetWidth() {
	return width;


}

///@brief copy constructor
Rectangle::Rectangle(const Rectangle& source)
{

	cout << "Copy constructor called" << endl;
	width = source.width;
	length = source.length;
}

/// @brief overload of operator "=", copies width and length
/// @param r Right operand
/// @return Left operand
Rectangle& Rectangle::operator=(const Rectangle& r)
{
	width = r.width;
	length = r.length;

	return *this; //ritorna l'operatore a sinistra (this è un puntatore), 
				  //è evidente il senso con degli = a catena
}

/// @brief overload of operator "==", compares width and length
/// @param r right operand
/// @return left operand
bool Rectangle::operator==(const Rectangle& r)
{
	if (r.width == width && r.length == length)
		return true;
	return false;
}
/// @brief set length of the object
/// @param l length in pixels
int Rectangle::GetLength() {
	return length;

}

/// @brief set width and length of the object
/// @param w width in pixels
/// @param l length in pixels
void Rectangle::GetDim(int& w, int& l) {
	w = width;
	l = length;

}

/// @brief Computes area
/// @return Area
int Rectangle::GetArea()
{
	return width * length;
}

/// @brief Computes perimeter
/// @return perimeter
int Rectangle::GetPerimeter()
{
	return (width + length) * 2;
}