//This is a program to check whether an input character is a vowel or not. We're using if else conditon here

#include <iostream>
using namespace std; //thse two lines are common and required in all teh programs

int main() {
  char a; //defining that input a is an integer
  cout << "Enter the alphabet : ";
  cin >> a;
  if (a=='a' or a=='A' or a=='e' or a=='E' or a=='i' or a=='I' or a=='o' or a=='O' or a=='u' or a=='U') //checking whether the input falls into the category of vowels, both in small and capital letters
  {
    cout << "You entered " <<a <<" and it is a vowel" <<endl; //printing if the above condition is satisfied
  }
  else {
    cout << "You entered " <<a << " and it is not a vowel. It is a consonant." << endl; //printing this outut if the above conditon is not satisfied
  }
}
