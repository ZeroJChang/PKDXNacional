#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	/*
	System::Console::WriteLine("Ingrese 70 pkmn :D");
	int arr[70], i, j;
	System::Console::WriteLine("Enter array values:\n");

	for (i = 0; i < 70; i++)
	{
		arr[i]= System::Convert::ToInt16(System::Console::ReadLine());
	}
	//BUBBLE SORT https://appdividend.com/2019/04/24/bubble-sort-in-cpp-tutorial-with-example-cpp-bubble-sort-program/
	for (i = 0; i < 70 - 1; i++)
	{
		for (j = 0; j < 70 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	System::Console::Clear();
	System::Console::WriteLine("ORDENADO ES");
	for (i = 0; i < 70; i++)
		System::Console::WriteLine(arr[i]);
	return 0;
	*/
	//PRUEBA xd
	System::Console::WriteLine("Ingrese el numero de 10 pkmn :D");
	int arr[10], i, j;

	for (i = 0; i < 10; i++)
	{
		arr[i] = System::Convert::ToInt16(System::Console::ReadLine());
	}
	//BUBBLE SORT https://appdividend.com/2019/04/24/bubble-sort-in-cpp-tutorial-with-example-cpp-bubble-sort-program/
	for (i = 0; i < 10 - 1; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	System::Console::Clear();
	System::Console::WriteLine("ORDENADO ES");
	int a;
	for (i = 0; i < 10; i++)
		
		System::Console::WriteLine(arr[i]);
		a = arr[i];
		switch (a)
		{
		case 1:
			System::Console::WriteLine("BULBASAUR");
			break;
		case 2:
			System::Console::WriteLine("IVYSAUR");
			break;
		case 3:
			System::Console::WriteLine("VENASAUR");
			break;
		case 4:
			System::Console::WriteLine("SQUIRTLE");
			break;
		case 5:
			System::Console::WriteLine("WARTORTLE");
			break;
		default:
			break;
		}
		//mostrarPkmn(arr[i]);
	return 0;

}

/*void mostrarPkmn(int a) {
	char variable[50]  = { "" };
	switch (a)
	{
	case 1: 
		System::Console::Write("BULBASAUR");
		break;

	case 2:
		System::Console::Write("IVYSAUR");
		break;
	case 3:
		System::Console::Write("VENASAUR");
		break;
	case 4:
		System::Console::Write("SQUIRTLE");
		break;
	case 5:
		System::Console::Write("WARTORTLE");
		break;
	default:
		break;
	}

}*/

