//Name: Kenneth Gaston
//File name: main.cpp
//Purpose: simple Hello World!

#include <iostream>
using namespace std;

int sum(int data);

int main(){
  int data;
  cout << "Please enter a number: ";
  cin >> data;
  cout << sum(data) << endl;
  return 0;
}

int sum(int data){
  int count = 0;
  for(int i = 1; i <= data; i++){
    count = count + i;
    cout << "Count is now " << count << endl;
  }
  return count;
}
