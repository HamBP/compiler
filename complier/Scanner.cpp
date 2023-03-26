#include <vector>
#include <string>
#include <iostream>
#include "Token.h"

using std::cout;
using std::string;
using std::vector;

enum class CharType {
	Unknown, // 이거 나오면 안 됨.
	WhiteSpace,
	NumberLiteral,
	StringLiteral,
	IdentifierAndKeyword,  // 변수나 키워드
	OperatorAndPunctuator, // , ; 같은 친구들
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
				cout << *current << "사용할 수 없는 문자입니다.";
				exit(1);
	}
	result.push_back({ Kind::EndOfToken });
	return result;
}

auto getCharType(char c)->CharType {
	return CharType::Unknown;
}