#include <iostream>
#include <string>
#include <regex>
using namespace std;

string concealCentence(string sentencePro);
void checkChance(int chance);
void checkCharacter(string characters);

int main()                                                                       // 메인 함수
{
	string sentencePro;
	string sentenceRev;
	string copy;
	string characters = "abcdefghijklmnopqrstuvwxz";

	int len;
	int chance;
	int chanceCo;
	char tryCharacter;
	static bool playing = true;
	
	
	cout << "Enter a problem sentence : ";
	getline(cin, sentencePro);

	cout << "Enter a number of chance : ";
	cin >> chance;

	len = sentencePro.length();
	chanceCo = chance;
	sentenceRev = concealCentence(sentencePro);

	while (playing)                                                            // 행맨 게임 반복문
	{
		cout << "-------------------------------------------" << endl;
		cout << "Sentence : " << sentenceRev << endl;

		checkChance(chance);
		checkCharacter(characters);

		cout << "Enter a character : ";
		cin >> tryCharacter;

		if (tryCharacter == 48)
		{
			cout << ">>-----Exit game-----" << endl;
			playing = false;
			break;
		}
		else if (characters.find(tryCharacter) == string::npos)
		{
			cout << ">> Use a lowcase alphabet letter!" << endl;
			continue;
		}
		else if (sentencePro.find(tryCharacter) == string::npos)
		{
			cout << ">> Wrong letter!" << endl;
		}
		else if (sentencePro.find(tryCharacter) != string::npos)
		{
			string str_Re(1, tryCharacter);

			cout << ">> Correct letter!" << endl;
			
			copy = regex_replace(sentencePro, regex(str_Re), "-");

			for (int i = 0; i < len; i++)
			{
				if (copy[i] == sentenceRev[i] && copy[i] == 45)
					sentenceRev[i] = tryCharacter;
			}

		}

		characters.erase(characters.find(tryCharacter), 1);
		chance--;

		if (sentencePro == sentenceRev)
		{
			cout << "-------------------------------------------" << endl;
			cout << endl << "Sentence : " << sentenceRev << endl;
			cout << ">> Success! (Total tries : " << chanceCo - chance << ")" << endl;
			playing = false;
			break;
		}
		else if (chance == 0)
		{
			cout << "-------------------------------------------" << endl;
			cout << endl << "Sentence : " << sentenceRev << endl;
			cout << ">> Lost all chance" << endl;
			playing = false;
			break;
		}
	}

}

string concealCentence(string sentencePro)                                       // 정답 가리기
{
	char sample[] = "-----------------------------------------------";           // 세상에서 제일 긴 영단어 '45'글자

	for (int i = 0; i < sentencePro.length(); i++)
	{
		if (sentencePro.find(" ", i) == string::npos)
		{
			string str_Re(sample, sentencePro.length() - i);
			sentencePro.replace(i, sentencePro.length() - i, str_Re);
			break;
		}
		else
		{
			string str_Re(sample, sentencePro.find(" ", i) - i);
			sentencePro.replace(i, sentencePro.find(" ", i) - i, str_Re);
		}
		i = sentencePro.find(" ", i);
	}

	return sentencePro;
}

void checkCharacter(string characters)                                           // 남은 글자 출력
{
	cout << "Remaining characters : ";

	for (int i = 0; i < characters.length(); i++)
	{
		cout << characters[i] << " ";
	}

	cout << endl;
}

void checkChance(int chance)                                                     // 남은 기회 출력
{
	cout << endl;

	for (int i = 0; i < chance; i++)
	{
		cout << "♥";
	}

	cout << endl << "chance : " << chance << endl;
}