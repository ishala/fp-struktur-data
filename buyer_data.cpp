#include <iostream>
#include <stdlib.h>
#include <vector>
#include "projekfix.cpp"

using namespace std;

#define MAX 10

int head = 0;
int tail = 0;

struct DATA
{
  vector<vector<int> > order; 
  DATA()
  {
    for (size_t i = 0; i < MAX; i++)
    {
      order.resize(0, vector<int>(2, 0));
    }
  } 
} buyer[MAX];

bool isEmpty(){return (tail == 0) ? true : false;};

bool isFull(){return (tail == MAX) ? true : false;};

void displayData(DATA* x)
{
  if (!isEmpty())
  {
    for (size_t i = head; i < tail; i++)
    {
      cout << "Antrian ke-" << i+1 << "\n\n";
      for (size_t j = 0; j < x[i].order.size(); j++)
      {
        cout << menuMakan[buyer[i].order[j][0]][buyer[i].order[j][1]];
        spacing(menuMakan[buyer[i].order[j][0]][buyer[i].order[j][1]]); 
        cout << "  ||  Rp. " << hargaMakan[buyer[i].order[j][0]][buyer[i].order[j][1]] << "\n";
      } 
      cout << "\n";
    }
  } else
  {
    cout << "Data kosong!.";
  }
}

void enQueue(DATA* x, size_t index)
{
  bool ordering, valid = true;
  int ID1, ID2;
  char pass;

  if (!isFull())
  {
    do
    {
      cout << "ANTRIAN KE-" << tail+1 << "\n\n";
      do
      {
        cout << "Masukkan ID1: ";
        cin >> ID1;
        cout << "Masukkan ID2: ";
        cin >> ID2;
        if (ID1 < 5 && ID2 < 10 && menuMakan[ID1][ID2] != "em") 
        {
          valid = true;
          x[index].order.push_back(vector<int>());
          x[index].order[x[index].order.size()-1].push_back(ID1);
          x[index].order[x[index].order.size()-1].push_back(ID2); 
        } else
        {
          system("CLS");
          cout << "Pilihan tidak valid!\n";
          valid = false;
        }
      } while (!valid);
    
      cout << "Mau menambah?(y/n) ";
      cin >> pass;
      tolower(pass);
      system("CLS");

      if (pass=='y')
      {
        ordering = true;
      } else
      {
        ordering = false;
      }
    }while (ordering);
  }
  tail++;
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
  tail--;
}

