#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&);
void swap(int&,int&);

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC); //call to sort the three integers in descending order

  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

/*
  sortDescending takes 3 integers passed by reference and invokes the
  swap function when one of the integers is less than the other.
  The result of this funtion is the integers containing in
  descending order.
*/
void sortDescending(int &first, int &second, int &third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}

/*
  swap function takes 2 integers passed by reference and swaps
  the value that each integer contains.
*/
void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
