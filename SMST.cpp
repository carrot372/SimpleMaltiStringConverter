/*
*Copyright 2021 carrot
*
*Licensed under the Apache License, Version 2.0 (the "License");
*you may not use this file except in compliance with the License.
*You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
*Unless required by applicable law or agreed to in writing, software
*distributed under the License is distributed on an "AS IS" BASIS,
*WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*See the License for the specific language governing permissions and
*limitations under the License.
*/

#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
	std::string str;
	char mode;
	std::string namtkn1;
	std::string namtkn2;
	while (true)
	{
		std::cout << "文字列の変換方法を入力してください。1:NamlanToken 2:すべて大文字 3:すべて小文字 4:終了" << std::endl;
		std::cout << "Please enter a string conversion method. 1:NamlanToken 2:All uppercase 3:All lowercase 4:Quit" << std::endl;

		std::cin >> mode;

		if (mode == '4')
		{
			break;
		}

		std::cout << "変換する文字列を入力してください。" << std::endl;
		std::cout << "Enter the string to be converted." << std::endl;

		std::cin >> str;

		if (mode == '1')
		{
			namtkn1 = std::toupper(str[0]);
			namtkn2 = str.substr(1);
			std::transform(namtkn2.begin(), namtkn2.end(), namtkn2.begin(), ::tolower);
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << "変換後の文字列 -> {" << "\"" << namtkn1 << namtkn2 << "\", " << str << "}\n" <<std::endl;
		}
		else if (mode == '2')
		{
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << "変換後の文字列 -> " << str << "\n" << std::endl;
		}
		else if (mode == '3')
		{
			std::transform(str.begin(), str.end(), str.begin(), ::tolower);
			std::cout << "変換後の文字列 -> " << str << "\n" << std::endl;
		}
	}
}