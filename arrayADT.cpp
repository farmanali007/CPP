#include <iostream>
using namespace std;
class arrayADT
{
private:
  int capacity;
  int lastindex;
  int *ptr;

public:
  arrayADT()
  {
    capacity = 0;
    lastindex = -1;
    ptr = NULL;
  }
  void createArray(int capacity);
  int getItem(int index);
  void setItem(int index, int value);
  void editItem(int index, int value);
  int countItems();
  void removeItem(int index);
  int searchItem(int value);
  void sortarray();
  friend ostream &operator<<(ostream &, arrayADT);
  ~arrayADT()
  {
    delete[] ptr;
  }
  arrayADT(arrayADT &list)
  {
    capacity = list.capacity;
    lastindex = list.lastindex;
    ptr = new int[capacity];
    for (int i = 0; i <= list.lastindex; i++)
      ptr[i] = list.ptr[i];
  }
};
ostream &operator<<(ostream &dout, arrayADT l)
{
  if (l.lastindex == -1)
    cout << "\nlist is empty";
  for (int i = 0; i < l.countItems(); i++)
    cout << " " << l.getItem(i);
  return (dout);
}

void arrayADT::sortarray()
{
  int r, i, t;
  for (r = 1; r < countItems(); r++)
  {
    for (i = 0; i < countItems() - r; i++)
      if (ptr[i] > ptr[i + 1])
      {
        t = ptr[i];
        ptr[i] = ptr[i + 1];
        ptr[i + 1] = t;
      }
  }
}

int arrayADT::searchItem(int value)
{
  if (lastindex == -1)
  {
    cout << "\nLIst is empty";
    return (-1);
  }
  int i;
  for (i = 0; i <= lastindex; i++)
  {
    if (ptr[i] == value)
      return (i);
  }
  return (-1);
}

void arrayADT::removeItem(int index)
{
  int i;
  if (index < 0 || index > lastindex)
    cout << "\n Either invalid index or underflow";
  if (index < lastindex)
    i = index;
  while (i != lastindex)
  {
    ptr[i] = ptr[i + 1];
    i++;
  }
  lastindex--;
}

int arrayADT::countItems()
{

  return (lastindex + 1);
}

void arrayADT::editItem(int index, int value)
{
  if (index < 0 || index > lastindex)
    cout << "\ninvalid index";
  else
    ptr[index] = value;
}

void arrayADT::setItem(int index, int value)
{
  int i;
  if (lastindex == capacity - 1)
    cout << "\noverflow";
  else if (index > capacity - 1 || index < 0)
    cout << "\nInvalid index";
  else if (index > lastindex + 1)
    cout << "\nInvalid index";
  else if (index <= lastindex)
  {
    lastindex++;
    i = lastindex;
    while (i != index)
    {
      ptr[i];
      ptr[i - 1];
      i--;
    }
  }
  else if (index == lastindex + 1)
    ptr[index] = value;
}
int arrayADT::getItem(int index)
{
  if (lastindex == -1)
  {
    cout << "\n list is empty\n";
    return (-1);
  }
  if (index > lastindex || index < 0)
  {
    cout << "\n invalid index";
    return (-1);
  }
  return (ptr[index]);
}

void arrayADT::createArray(int capacity)
{
  this->capacity = capacity;
  lastindex = -1;
  ptr = new int[capacity];
}

int main()
{
  arrayADT l1;
  l1.createArray(10);
  l1.setItem(0, 10);
  l1.setItem(-1, 20);
  l1.setItem(2, 230);
  cout << l1;
  return 0;
}