#include<iostream>
#include<string>
#include<array>


int main() {
	std::array<char, 7> ar{ 'a','t','c','o','d','e','r' };
	std::array<std::string,2> str;
	std::cin >> str[0] >> str[1];

	for (int i = 0; i < (int)str[0].size(); i++) {

		for (int x = 0; x < str.size(); x++) {
			if (str[x][i] == '@') {
				bool flag = true;
				if (str[0][i] == str[1][i]) {
					continue;
				}
				for (int j = 0; j < ar.size(); j++) {
					if (str[x == 0 ? 1 : 0][i] == ar[j]) {
						flag = false;
					}
				}
				if (flag) {
					std::cout << "You will lose" << std::endl;
					exit(0);
				}
			}
		}
		if (str[0][i] != str[1][i] && str[0][i] != '@' && str[1][i] != '@') {
			std::cout << "You will lose" << std::endl;
			exit(0);
		}
	}
	std::cout << "You can win" << std::endl;

	return 0;
}