//#include "stdafx.h"
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> vec = { 11,3,56,12 };
	cout << vec[1]<< "hello world" << endl;
	//sort(vec.begin(), vec.end());

	for (int i = 0; i < 5; i++)
		vec.push_back(i);
	
	/*Iterators*/
	cout << "output begin end";
	for (auto i = vec.begin(); i != vec.end(); ++i)
		cout << *i << " ";
	cout << endl;

	cout << "output of cbegin cend";
	for (auto i = vec.cbegin(); i < vec.cend(); i++)
		cout << *i << " ";
	cout << endl;
	cout << "output of rbegin" << endl;
	for (auto i = vec.rbegin(); i < vec.rend(); i++)
		cout << *i << " ";
	cout << endl;

	cout << "outpout of crbegin" << endl;
	for (auto i = vec.crbegin(); i < vec.crend(); i++)
		cout << *i << " ";

	/*Capacity*/
	vec.push_back(34);
	cout << "\n Size " << vec.size();
	cout << "\n Capacity" << vec.capacity();
	cout << "\n Max_Size" << vec.max_size(); //Returns the maximum number of elements that the vector can hold

	vec.shrink_to_fit(); //Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
	//
	cout << "\n now the size is " << vec.size();
	cout << "\n now the capacity is " << vec.capacity();
	cout << "\nafter shrink no of elements are\n";
	for (auto i = vec.begin(); i < vec.end(); i++)
		cout << *i << " ";

	/*Element access*/

	cout << "\nReference operator [g] : g1[2] = " << vec[2];
	cout << "\n at " << vec.at(3);
	cout << "\n  front " << vec.front();
	cout << "\n back " << vec.back();


	cout << "pointer to first element " << endl;
	int *p = vec.data();
	cout << "\n first element " << *p;

	/*Modifiers*/
	//creating new vec
	vector<int> v;
	v.assign(5, 10); //fill the array with 10 5 times..?
	cout << "\n vector elements are"<<endl;
	for (auto i = v.begin(); i < v.end(); i++)
		cout << *i<< " ";

	// inserts 15 to the last position
	cout << "\n inserts 15 to the last position";
	v.push_back(15);
	int n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

	cout << "\n pop_back removes the last elemet" << endl;
	v.pop_back();

	cout << "\nThe vector elements after pop_back are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << "\ninserts 5 at the beginning";
	v.insert(v.begin(), 5);
	cout << "\nThe first element is: " << v[0];

	cout << "\nerase removes the element";
	v.erase(v.begin());
	cout << "\nRemoved first element now The first element is: " << v[0];


	cout << "\n emplace inserts.. we are insering at the beginning" << endl;
	v.emplace(v.begin(), 5);
	cout << "\nThe first element is: " << v[0];

	cout << "/n emplace_back inserts at the end we are Inserting 20 at the end" << endl;
	v.emplace_back(20);
	n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

	cout << "\n clear erases the vector"<<endl;
	v.clear();
	cout << "\nVector size after erase(): " << v.size();

	// two vector to perform swap
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(2);
	v2.push_back(3);
	v2.push_back(4);

	cout << "\n\nVector 1: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";

	// Swaps v1 and v2
	v1.swap(v2);

	cout << "\nAfter Swap \nVector 1: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";

	return 0;
}
