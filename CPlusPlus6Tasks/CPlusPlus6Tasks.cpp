#include <iostream>
#include "TreeDictionary.h"

int main()
{
	TreeDictionary* tree = new TreeDictionary();
	tree->addWord("Privet");
	tree->addWord("Makarov");
	tree->addWord("Anya");
	tree->addWord("Anya");
	tree->addWord("Papich");
	tree->addWord("Ivan");
	tree->addWord("IMIT");
	tree->addWord("CPlusPlus");
	tree->addWord("xQc");
	std::cout << *tree << std::endl;
	std::cout << "count words in tree:" << tree->countWords() << std::endl;
	std::cout << "frequency word \"Anya\" :" << tree->findWord("Anya") << std::endl;
	std::cout << "frequency word \"Kaban\" :" << tree->findWord("Kaban") << std::endl;
	std::cout << "frequency word \"NET\" :" << tree->findWord("NET") << std::endl;
	std::cout << "delete words" << std::endl;
	tree->deleteWord("Papich");
	tree->deleteWord("Ivan");
	tree->deleteWord("Anya");
	std::cout << *tree << std::endl;
	std::cout << "count word: " << tree->countWords() << std::endl;
	std::cout << "frequency word \"Anya\" :" << tree->findWord("Anya") << std::endl;
	std::cout << "frequency word \"Kaban\" :" << tree->findWord("Kaban") << std::endl;
	std::cout << "frequency word \"Ivan\" :" << tree->findWord("Ivan") << std::endl;
	system("pause");
	return 0;
}


