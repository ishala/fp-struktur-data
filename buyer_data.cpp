#include "projekfix.cpp"


using namespace std;

#define MAX 10  

int head = 0;
int tail = 0;
int antrian = 0;
int ID1, ID2;
bool ordering, valid = true;
char pass;

struct DATA
{
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
        cout << "\t\tBerhasil memilih!\n";
      } 
    } while (!valid);
  } else{
    cout << "\t\tData Penuh!";
  }
  
};




//HAPUS DATA
void deQueue(DATA* x)
{
  if (!isEmpty())
  {
    copy(x+1, x+MAX, x);
  } else
  {
    system("cls");
    amogusEmpty();
  }
  tail--;
  antrian--;
}

void sortDescending(DATA* x)
{
  for (size_t h = 0; h < x[tail].order.size()-1; h++)
  {
    for (size_t i = 0; i < x[tail].order.size()-1; i++) 
    {
      if (priceIsHigher(i, tail, x))
      {
        swap(x[tail].order[i][0], x[tail].order[i+1][0]);
        swap(x[tail].order[i][1], x[tail].order[i+1][1]);
      }
    }
  }
}

void searchMenu(DATA* x)
{
  bool isFound = false;

  
  for (size_t z = 0; z < 5; z++)
  {
    for (size_t y = 0; y < 10; y++)
    {
      vector<int> menuPosition;
      vector<vector<int> > searchElement;
      vector<vector<int> >::iterator it[tail+1];  
      searchElement.push_back(vector<int>());
      searchElement[searchElement.size()-1].push_back(z);
      searchElement[searchElement.size()-1].push_back(y);
      

      for (size_t i = 0; i < tail+1; i++)
      {
        it[i] = search(x[i].order.begin(), x[i].order.end(), searchElement.begin(), searchElement.end());
      }

      for (size_t i = 0; i < tail+1; i++)
      {
        if (it[i] != x[i].order.end())
        {
          menuPosition.push_back(i);
        } 
      }

      for (size_t j = 0; j < menuPosition.size(); j++)
      {
        if (j == 0)
        {
           cout << "\nMenu " << menuMakan[z][y] << " ditemukan dalam: " << menuPosition[j]+1;
        } else
        {
           cout << ", " << menuPosition[j]+1;
        }

        if (j == menuPosition.size()-1)
        {
          cout << ".";
        }
      }
    } 
  }
}

void displayData(DATA* x)
{ 
  
  int total = 0;
  if (!isEmpty())
  {
    for (size_t i = head; i < tail; i++)
    {
      // cout << "Antrian ke-" << i+1 << "\n\n";
      cout << "=====================\n";
      cout << "|| Antrian ke - " << i+1 << "  ||\n";
      cout << "===============================================\n";
      for (size_t j = 0; j < x[i].order.size(); j++)
      {
        total += hargaMakan[buyer[i].order[j][0]][buyer[i].order[j][1]];
        cout << "  " << menuMakan[buyer[i].order[j][0]][buyer[i].order[j][1]]; 
        spacingMakanan(menuMakan[buyer[i].order[j][0]][buyer[i].order[j][1]]);
        cout << "|| Rp. "; dot(&hargaMakan[buyer[i].order[j][0]][buyer[i].order[j][1]]); 
        spacingHarga();
        cout << "\n";
      } 
      cout << "===============================================\n";
      //spacingTotal();
      cout << "        TOTAL              || Rp. "; dot(&total); cout << "  \n";
      cout << "===============================================\n\n\n";
    };
    searchMenu(x);
  } else
  {
    system("cls");
    amogusEmpty();
  }
}

// int main(int argc, char const *argv[])
// {
//   buyer[0].order.push_back(vector<int>());
//   buyer[0].order[buyer[0].order.size()-1].push_back(1);
//   buyer[0].order[buyer[0].order.size()-1].push_back(2);
//   buyer[1].order.push_back(vector<int>());
//   buyer[1].order[buyer[0].order.size()-1].push_back(1);
//   buyer[1].order[buyer[0].order.size()-1].push_back(3);
//   buyer[2].order.push_back(vector<int>());
//   buyer[2].order[buyer[0].order.size()-1].push_back(1);
//   buyer[2].order[buyer[0].order.size()-1].push_back(3);
//   tail+=3;
//   searchMenu(buyer);
//   return 0;
// }
