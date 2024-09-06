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
// Output: Distance between points, sphere area, sphere circumfrence, sphere radius
//********************************************************

// gcc /workspaces/fall-2024-cop-3223-assignment1/fracturing.c && ./a.out
//printf("");

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
    printf("Enter the x-coordinate of Point #1. ");
    scanf("%d", &x1);
    printf("Enter the y-coordinate of Point #1. ");
    scanf("%d", &y1);
    printf("Enter the x-coordinate of Point #2. ");
    scanf("%d", &x2);
    printf("Enter the y-coordinate of Point #2. ");
    scanf("%d", &y2);

    // Informs user of input
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    // Calculates and prints distance
    double distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("The distance between the two points is %.4f \n", distance); 

    // Returns distance
    return distance;
} // calculateDistance

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
    // Declares variables to store X-Y coordinate values
    int x1;
    int x2;
    int y1;
    int y2;
    
    // Gets user input on X-Y coordinates
    printf("Enter the x-coordinate of Point #1. ");
    scanf("%d", &x1);
    printf("Enter the y-coordinate of Point #1. ");
    scanf("%d", &y1);
    printf("Enter the x-coordinate of Point #2. ");
    scanf("%d", &x2);
    printf("Enter the y-coordinate of Point #2. ");
    scanf("%d", &y2);

    // Informs user of input
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);
    
    // Calculates and prints perimeter
    double distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    double perimeter = 2*3.14159265*(distance/2);
    printf("The perimeter of the city encompassed by your request is %.4f \n", perimeter);

    // Returns 
    return 1.0;

    //Return: A double indicating how difficult you found to do this function on a scale of 1.0 through 5.0 where 1 is easy and 5 is hard
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
    // Declares variables to store X-Y coordinate values
    int x1;
    int x2;
    int y1;
    int y2;
    
    // Gets user input on X-Y coordinates
    printf("Enter the x-coordinate of Point #1. ");
    scanf("%d", &x1);
    printf("Enter the y-coordinate of Point #1. ");
    scanf("%d", &y1);
    printf("Enter the x-coordinate of Point #2. ");
    scanf("%d", &x2);
    printf("Enter the y-coordinate of Point #2. ");
    scanf("%d", &y2);

    // Informs user of input
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    // Calculates and prints area
    double distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    double area = 3.14159265*pow((distance/2),2);
    printf("The area of the city encompassed by your request is %.4f \n", area);

    // Returns 
    return 0.3;
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
    // Declares variables to store X-Y coordinate values
    int x1;
    int x2;
    int y1;
    int y2;
    
    // Gets user input on X-Y coordinates
    printf("Enter the x-coordinate of Point #1. ");
    scanf("%d", &x1);
    printf("Enter the y-coordinate of Point #1. ");
    scanf("%d", &y1);
    printf("Enter the x-coordinate of Point #2. ");
    scanf("%d", &x2);
    printf("Enter the y-coordinate of Point #2. ");
    scanf("%d", &y2);

    // Informs user of input
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    // Calculates and prints width
    double width = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("The width of the city encompassed by your request is %.4f \n", width);

    // Returns 
    return 0.4;
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
    // Declares variables to store X-Y coordinate values
    int x1;
    int x2;
    int y1;
    int y2;
    
    // Gets user input on X-Y coordinates
    printf("Enter the x-coordinate of Point #1. ");
    scanf("%d", &x1);
    printf("Enter the y-coordinate of Point #1. ");
    scanf("%d", &y1);
    printf("Enter the x-coordinate of Point #2. ");
    scanf("%d", &x2);
    printf("Enter the y-coordinate of Point #2. ");
    scanf("%d", &y2);

    // Informs user of input
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    // Calculates and prints height
    double distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    double height = distance/2;
    printf("The height of the city encompassed by your request is %.4f \n", height);

    // Returns 
    return 0.5;
} // calculateHeight
