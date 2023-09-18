#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //ROSSZ VÁLTOZÓ
    std::cout << '1-100 ertekek duplazasa' //CHAR KIÍRATÁS, DE STRINGET KELL 
    for (int i = 0;) //BEFEJEZETLEN FOR
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" //ROSSZ KIÍRÁS
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  //NINCS INICIALIZÁLVA
    for (int i = 0; i < N_ELEMENTS, i++) //ROSSZ FOR
    {
        atlag += b[i]   
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
