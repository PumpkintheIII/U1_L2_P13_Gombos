/*
  UB C Programming Unit 1 Lesson 2 Program 13
  Weekly Salary
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  float salary, weekly; //intialize variable as float

  printf("Yearly Salary: "); //ask for yearly salary
  scanf("%f", &salary); //accept input and format as float

  weekly = salary/52; //find weekly salary

  printf("Weekly Salary: $%0.2f", weekly); //print weekly salary
  
  return 0;
}