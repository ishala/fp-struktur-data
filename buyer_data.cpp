#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define MAX 10
#define menuRow 4
#define menuColumn 21

int head = 0;
int tail = 0;

struct DATA
{
  int queNumber;
  vector<vector<string> > order;  
} buyer[MAX];

void setVector(DATA*x, int size)
{
  for (size_t i = 0; i < size; i++)
  {
    buyer[i].order.resize(menuRow, vector<string>(menuColumn, ""));
  }
}

void setQueNumber(DATA* x, int size)
{
  for (size_t i = 0; i < size; i++)
  {
    x[i].queNumber = i+1;
  } 
};  

bool isEmpty(){return (tail == 0) ? true : false;};

bool isFull(){return (tail == MAX) ? true : false;};

void displayData(DATA* x)
{
  if (!isEmpty())
  {
    for (size_t i = head; i < tail-1; i++)
    {
      cout << x[i].queNumber;
    }
  } else
  {
    cout << "Data kosong!.";
  }
}

void enQueue(DATA* x)
{
  if (!isFull)
  {

    tail++;
  }
};

void deQueue(DATA* x)
{
  if (!isEmpty)
  {
    std::copy(x+1, x+MAX, x);
  } else
  {
    cout << "Data penuh!";
  }
  
}

int main(int argc, char const *argv[])
{
  setQueNumber(buyer, MAX);
  setVector(buyer, MAX);
  return 0;
}
