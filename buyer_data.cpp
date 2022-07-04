#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>

#include "projekfix.cpp"

using namespace std;

#define MAX 10  

int head = 0;
int tail = 0;
int ID1, ID2;
bool ordering, valid = true;
char pass;

struct DATA
{
  string name;
  vector<vector<int> > order; 
} buyer[MAX];

bool isEmpty(){return (tail == 0) ? true : false;};

bool isFull(){return (tail == MAX) ? true : false;};

bool priceIsHigher(int i, int index, DATA* x)
{
  return (hargaMakan[x[index].order[i][0]][x[index].order[i][1]] < hargaMakan[x[index].order[i+1][0]][x[index].order[i+1][1]]) ? true : false;
};


//MENAMBAH DATA
void enQueue(DATA* x)
{
  if (!isFull())
  {
    do
    {
      if (ID1 < 5 && ID2 < 10 && menuMakan[ID1][ID2] != "em") 
      {
        valid = true;
        x[tail].order.push_back(vector<int>());
        x[tail].order[x[tail].order.size()-1].push_back(ID1);
        x[tail].order[x[tail].order.size()-1].push_back(ID2); 
      } else
      {
        system("CLS");
        cout << "Pilihan tidak valid!\n";
        valid = false;
      }
    } while (!valid);
  } else{
    cout << "Data Penuh!";
  }
  tail++;
};


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
    cout << "Data kosong!";
  }
}

//HAPUS DATA
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

void sortDescending(DATA* x, size_t index)
{

  for (size_t h = 0; h < x[index].order.size()-1; h++)
  {
    for (size_t i = 0; i < x[index].order.size()-1; i++) 
    {
      if (priceIsHigher(i, index, x))
      {
        swap(x[index].order[i][0], x[index].order[i+1][0]);
        swap(x[index].order[i][1], x[index].order[i+1][1]);
      }
    }
  }
}

// //KONDISI LOOP
// bool pilihMenu()
// {
//       if(pass == '>'){
//         return false;
//       } else{
//         return true;
//       }
// }

// void add()
// {
//         cout << "Mau menambah?(y/n) ";
//         cin >> pass;
//         system("CLS");
//         pilihMenu();
// }
int main(int argc, char const *argv[])
{
  return 0;
}
