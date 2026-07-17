#include<iostream>
#include<Windows.h>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {

	Animal* animal;

	Dog dog;
	Cat cat;

	animal = &dog;
	animal->Speak();

	animal = &cat;
	animal->Speak();

	return 0;
}