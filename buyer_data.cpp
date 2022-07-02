#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "projekfix.cpp"

using namespace std;

#define MAX 10


int head = 0;
int tail = 0;

struct DATA
{
  int queNumber;
  int orderAmount;
  vector<vector<int> > order;  
} buyer[MAX];

void setVector(DATA*x, int size)
{
  for (size_t i = 0; i < size; i++)
  {
    buyer[i].order.resize(0, vector<int>(2, 0));
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
      cout << "Urutan ke-" << x[i].queNumber << "\n";

      for (size_t j = 0; j < x[i].order.size(); j++)
      {
        cout << menuMakan[buyer[i].order[j][0]][buyer[i].order[j][1]] << "\n";
      } 
    }
  } else
  {
    cout << "Data kosong!.";
  }
}

void enQueue(DATA* x, size_t index)
{
  bool ordering = true;

  if (!isFull())
  {
    do
    {
      cout << "Masukkan pilihan menu Anda: ";
      
      x[index].order.push_back(vector<int>());
      x[index].order[0].push_back(1);
      x[index].order.push_back(vector<int>());
      x[index].order[0].push_back(2); 

    } while (ordering);
    
      
 

    tail++;
  }
};

void deQueue(DATA* x)
{
  if (!isEmpty())
  {
    copy(x+1, x+MAX, x);
  } else
  {
    cout << "Data penuh!";
  }
  
}

int main(int argc, char const *argv[])
{
  setQueNumber(buyer, MAX);
  setVector(buyer, MAX);
  enQueue(buyer, 0);
  displayData(buyer);


  

  for (size_t i = 0; i < 10; i++)
  {
    for (size_t j = 0; j < buyer[i].order.size(); j++)
    {
      for (size_t k = 0; k < buyer[i].order[j].size(); k++)
      {
        cout << "[" << j << "][" << k << "] = ";
        cout << buyer[i].order[j][k] << endl;
      }
    }
  }
  
    
  
  return 0;
}
