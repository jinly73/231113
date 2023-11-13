#include <iostream>
#include <vector>
#include <list>

#include "Player.h"
#include "Goblin.h"

using namespace std;


int main()
{
	//STL, container
	vector<int> IntArray;

	IntArray.push_back(1);
	IntArray.push_back(2);
	IntArray.push_back(3);

	//IntArray에 2번째 배열 지워주세요
	IntArray.erase(find(IntArray.begin(), IntArray.end(), 2));

	//for (vector<int>::iterator i = IntArray.begin(); i != IntArray.end(); ++i)
	for (auto Value : IntArray)
	{
		cout << Value<< endl;
	}



	list<int> Intlist;
	Intlist.push_back(1);
	Intlist.push_back(2);
	Intlist.push_back(3);
	for (auto Value : Intlist)
	{
		cout << Value << endl;
	}
	for (list<int>::reverse_iterator i = Intlist.rbegin(); i != Intlist.rend(); ++i)
	{

		cout << *i << endl;
	}


	/*
	FPlayer* MyPlayer = new FPlayer();
	
	MyPlayer->Move();
		
	delete MyPlayer;

	vector<FGoblin*> Goblin
	Goblin.push_back(new FGoblin());

	Goblin->Move();
	delete Goblin;
	*/
	return 0;
}