#pragma once
#include<iostream>
#include<string>

using namespace std;


class Auto

{
	private:
		int Id;

		string Marca, Model;

	public:
		Auto();

		//~Auto();

		Auto(int, string, string);

		int get_id();

		string get_marca();

		string get_model();

		void set_id(int);

		void set_marca(string);

		void set_model(string);
};
