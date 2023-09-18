#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //ROSSZ VÁLTOZÓ
    std::cout << "1-100 ertekek duplazasa" << std::endl; //CHAR KIÍRATÁS, DE STRINGET KELL (+ hiányzó ;)
    for (int i = 0; i < N_ELEMENTS; i++) //BEFEJEZETLEN FOR
    {
        b[i] = (i+1) * 2; //MIVEL AZ VOLT MEGADVA, HOGY 1-100, EZÉRT NEM JÓ A 0-99
    }
    for (int i = 0; i < N_ELEMENTS; i++) //ROSSZ FOR CIKLUS
    {
        std::cout << "Ertek:" << b[i] << std::endl; //ROSSZ KIÍRÁS
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;  //NINCS INICIALIZÁLVA
    for (int i = 0; i < N_ELEMENTS; i++) //ROSSZ FOR
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
	std::cout << "Ezt khgfkufigzufg írta " << std::endl;
    return 0;
}
