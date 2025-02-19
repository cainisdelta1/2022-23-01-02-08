#include <iostream>

void printW()
{
  std::cout << std::endl << std::endl;
}

void printnum(int num)
{
  std::cout << num;
  printW();
}

int sum(int n1, int n2)
{
  return n1 + n2;
}

int main() {

  // an array name is a constant pointer to the 1st element of the array
  float grades[5] = { 100.0, 90.0, 80.0, 70.0, 60.0};
  std::cout << "grades \t\t  = " << grades << std::endl;

  //array pointers
  float * p_grades = grades;
  //p_grades = 0x7fffa8c8f5f0
  std::cout << "*p_grades \t  = " << p_grades << std::endl;
  //print the first element of the array
  std::cout << "grades[0] \t  = " << std::fixed << grades[0] << std::endl;
  std::cout << "*p_grades \t  = " << std::fixed << *p_grades << std::endl;
  printW();

  //print the second element of the array
  std::cout << "grades[1] \t  = " << std::fixed << grades[1] << std::endl;
  std::cout << "*(p_grades+1) = " << std::fixed << *(p_grades+1) << std::endl;
  printW();

  //print the third element of the array
  std::cout << "grades[2] = " << std::fixed << grades[2] << std::endl;
  std::cout << "*(p_grades+2) = " << std::fixed << *(p_grades+2) << std::endl;
  printW();
  
  //print the fourth element of the array
  std::cout << "grades[3] = " << std::fixed << grades[3] << std::endl;
  std::cout << "*(p_grades+3) = " << std::fixed << *(p_grades+3) << std::endl;
  printW();
  
  //print the fifth element of the array
  std::cout << "grades[4] = " << std::fixed << grades[4] << std::endl;
  std::cout << "*(p_grades+4) = " << std::fixed << *(p_grades+4) << std::endl;
  printW();


  //loop through the elements in the array using an array name
  for (int i = 0; i < 5; i++)
  {
    std::cout << "grades[" << i << "] = " << std::fixed << grades[i] << std::endl;
  }
  
  std::cout << std::endl << std::endl;
  // loop through the elements in the array using a pointer
  for (int i = 0; i < 5; i++)
  {
    std::cout << "*(p_grades+" << i << ") = " << std::fixed << *(p_grades+i) << std::endl;    
  }

  printW();
  printnum(*(p_grades++));
  printnum(*(++p_grades));

  printW();

  int i = 1;
  printnum(i++); // prints then increments to 2
  printnum(++i); // increments to 3 then prints i

  printW();

  i = 1;
  int *p_i = &i;
  printnum((*p_i)++);
  printnum(++(*p_i));

  std::cout << "so what is i? " << i << std::endl;

  std::cout << sum(i,i) << std::endl;
  return 0;
}