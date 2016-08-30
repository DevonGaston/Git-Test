//Name: Kenneth Gaston
//File name: main.cpp
//Purpose: simple Hello World!

#include <iostream>
using namespace std;

int sum(int data);
int product (int data);

int main(){
  int data;
  cout << "Please enter a number: ";
  cin >> data;
  cout << "Sum is " << sum(data) << endl;
  cout << "Product is " << product(data) << endl;
  return 0;
}

int sum(int data){
  int count = 0;
  for(int i = 1; i <= data; i++){
    count = count + i;
  }
  return count;
}

int product(int data){
  int count = 1;
  for(int i = 1; i <= data; i++){
    count = count * i;
  }
  return count;
}
