//********************************************************
// fracturing.c
// Author: Ethan Owen
// UCFID: 5225596
// Date: 9/5/2024
// Class: COP 3223, Professor Parra
// Purpose: This program calculates the distance between points and the aspects of a semicircle in relation to a city.
// Why a sphere in relation to a city? We finding blast radius or something? Who made this assignment, Raytheon?
// The main purpose of this assignment is to practice functions and fracturing.
// Input: 2 X-Y coordinates.
//
// Output: Distance between points; sphere: area, perimeter, radius. height, width
//********************************************************

// Includes libraries required for code to function
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Defines functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

//********************************************************
// int main(int argc, char **argv)
//
// Purpose:         Main function, calls all other functions.
// Output:          None.
// Precondition:    Autograder variables.   
// Postcondition:   None.  
//********************************************************
int main(int argc, char **argv)
{
    // Calls other functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
} // main

//********************************************************
// double calculateDistance()
//
// Purpose:         Finds distance between two user inputted coordinates on an X-Y plane.
// Output:          Prints questions asking for coordinates, coordinate confirmation, and distance to the terminal.
// Precondition:    None.   
// Postcondition:   
//********************************************************
double calculateDistance()
{
    // Declares variables to store X-Y coordinate values
    int x1;
    int x2;
    int y1;
    int y2;
    
    // Gets user input on X-Y coordinates
    // In accordance with the rubric request of only 3 lines outputted, program does not ask user for their input and instead just assumes the user knows what they're doing.
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    // Informs user of input
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    // Declares variables & calculates and prints distance
    double distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("The distance between the two points is %.4f \n", distance); 

    // Returns distance
    return distance;
} // calculateDistance

//********************************************************
// double calculateDistanceFunc()
//
// Purpose:         Finds distance between two user inputted coordinates on an X-Y plane. Meant to be used with other functions while still abiding by rubric requirements.
// Output:          Prints questions asking for coordinates, coordinate confirmation, and distance to the terminal.
// Precondition:    None.   
// Postcondition:   
//********************************************************
double calculateDistanceFunc()
{
    // Declares variables to store X-Y coordinate values
    int x1;
    int x2;
    int y1;
    int y2;
    
    // Gets user input on X-Y coordinates
    // In accordance with the rubric request of only 3 lines outputted, program does not ask user for their input and just assumes the user knows what they're doing.
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    // Informs user of input
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    // Declares variables & calculates distance
    double distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    // Returns distance
    return distance;
} // calculateDistanceFunc

//********************************************************
// double calculatePerimeter()
//
// Purpose:         Finds circumfrence of sphere that affects city-space from two user inputted X-Y coordinates
// Output:          Prints questions asking for coordinates, coordinate confirmation, and perimeter to the terminal.
// Precondition:    None.     
// Postcondition:   
//********************************************************
double calculatePerimeter()
{
    // Declares variables & calculates and prints perimeter
    double distance = calculateDistanceFunc();
    double perimeter = 2*3.14159265*(distance/2);
    printf("The perimeter of the city encompassed by your request is %.4f \n", perimeter);

    // Returns how easy I thought it was to implement this function on a 1.0-5.0 scale
    return 1.1;

} // calculatePerimeter

//********************************************************
// double calculateArea()
//
// Purpose:         Finds area of semicircle that affects city air & ground space from two user inputted X-Y coordinates
// Output:          Prints questions asking for coordinates, coordinate confirmation, and area to the terminal.
// Precondition:    None.     
// Postcondition:   
//********************************************************
double calculateArea()
{
    // Declares variables & calculates and prints area
    double distance = calculateDistanceFunc();
    double area = 3.14159265*pow((distance/2),2);
    printf("The area of the city encompassed by your request is %.4f \n", area);

    // Returns how easy I thought it was to implement this function on a 1.0-5.0 scale
    return 1.2;
} // calculateArea

//********************************************************
// double calculateWidth()
//
// Purpose:         Finds diameter of circle that affects city-space from two user inputted X-Y coordinates
// Output:          Prints questions asking for coordinates, coordinate confirmation, and width to the terminal.
// Precondition:    None.     
// Postcondition:   
//********************************************************
double calculateWidth()
{
    // Declares variables & calculates and prints width
    double width = calculateDistanceFunc();
    printf("The width of the city encompassed by your request is %.4f \n", width);

    // Returns how easy I thought it was to implement this function on a 1.0-5.0 scale
    return 1.0;
} // calculateWidth

//********************************************************
// double calculateHeight()
//
// Purpose:         Finds height of sphere that affects city-space from two user inputted X-Y coordinates
// Output:          Prints questions asking for coordinates, coordinate confirmation, and height to the terminal.
// Precondition:    None.     
// Postcondition:   
//********************************************************
double calculateHeight() 
{
    // Declares variables & calculates and prints height
    double distance = calculateDistanceFunc();
    double height = distance/2;
    printf("The height of the city encompassed by your request is %.4f \n", height);

    // Returns how easy I thought it was to implement this function on a 1.0-5.0 scale
    return 1.0;
} // calculateHeight
