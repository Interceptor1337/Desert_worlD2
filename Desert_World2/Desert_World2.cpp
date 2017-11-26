#include "stdafx.h"
#include "GameClasses.h"
#include <Windows.h>
#include <stdio.h> 
#include <list>
#include <iterator>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>

int main()
{
 list<DObject*> mylist;

 ifstream fin("C:\\Users\\interceptor\\Documents\\names.txt");

 string name;
 char texture;
 int x;
 int y;

 while (true)
 {
  fin >> name;

  if (name == "Player")
  {
   fin >> texture >> x >> y;
   x--;
   y--;
   Player *buff = new Player(x, y, texture, rand(), rand());
   mylist.push_back(buff);
  }
  if (name == "DObject")
  {
   fin >> texture >> x >> y;
   x--;
   y--;
   DObject *buff = new DObject(x, y, texture, rand(), rand());
   mylist.push_back(buff);

  }
  if (name == "Unit")
  {
   fin >> texture >> x >> y;
   x--;
   y--;
   Unit *buff = new Unit(x, y, texture, rand(), rand());
   mylist.push_back(buff);
  }
  if (name == "Wall")
  {
   fin >> texture >> x >> y;
   x--;
   y--;
   Wall *buff = new Wall(x, y, texture, rand(), rand());
   mylist.push_back(buff);
  }
  if (name == "Bot")
  {
   fin >> texture >> x >> y;
   x--;
   y--;
   Bot *buff = new Bot(x, y, texture, rand(), rand());
   mylist.push_back(buff);
  }
  if (name == "stop")
  {
   fin.close();
   break;
  }
  while (!mylist.back())
  {

  }
 }

 for (list<DObject*>::iterator i = mylist.begin(); i != mylist.end(); i++)
 {
  cout << (*i)->getName() << endl;
 }

 cout << endl;

 for (auto i = mylist.begin(); i != mylist.end(); i++)
 {
  if ((*i)->getName() == "Player")
  {
   i = mylist.erase(i);
  }
 }

 for (list<DObject*>::iterator i = mylist.begin(); i != mylist.end(); i++)
 {
  cout << (*i)->getName() << endl;
 }
 return 0;
}
