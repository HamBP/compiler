#include <vector>
#include <string>
#include <iostream>
#include "Token.h"

using std::cout;
using std::string;
using std::vector;

enum class CharType {
	Unknown, // �̰� ������ �� ��.
	WhiteSpace,
	NumberLiteral,
	StringLiteral,
	IdentifierAndKeyword,  // ������ Ű����
	OperatorAndPunctuator, // , ; ���� ģ����
};

static auto getCharType(char)->CharType;

static string::iterator current;

auto scan(string sourceCode)->vector<Token> {
	vector<Token> result;
	sourceCode += '\0';
	current = sourceCode.begin();
	while (*current != '\0') {
		switch (getCharType(*current))
			default:
				cout << *current << "����� �� ���� �����Դϴ�.";
				exit(1);
	}
	result.push_back({ Kind::EndOfToken });
	return result;
}

auto getCharType(char c)->CharType {
	return CharType::Unknown;
}