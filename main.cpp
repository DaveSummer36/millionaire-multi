#include <iostream>
using namespace std;

int main()
{
	char choice;
	char answer1, answer2, answer3, answer4, answer5;
	char answer6, answer7, answer8, answer9, answer10;
	char answer11, answer12, answer13, answer14, answer15;
	int q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15, nothing;

	nothing = 0;

	cout << "\nHello and welcome to the 25th anniversary of WWTBAM," << endl;
	cout << "and also the 16th anniversary of the US Clock Format of the game." << endl;
	cout << "\nNow I brought back the original version of the show." << endl;
	cout << "But this time, there are no any lifelines to use." << endl;
	cout << "It's only you, the question and the four possible answers!" << endl;
	cout << "\nMy final question before the game: Are you ready? (Yes or No)" << endl;
	cin >> choice;

	switch(choice)
	{
		case 'n':
			cout << "\nI'm so sorry to take away your time for no reason at all! Buh-Bye!" << endl;
			return 0;

		case 'y':
			cout << "\nOkay. Then let's play Millionaire!" << endl;
			break;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;

	}

	cout << "\nIMPORTANT NOTE: THIS IS ONLY AN INFDEV VERSION!\nNOTHING SPECIAL INCLUDED RIGHT NOW!" << endl;

	q1 = 500;
	cout << "\n\nLet's see the first question for $" << q1 << "!" << endl;
	cout << "Which of the following car brands is not Italian?" << endl;
	cout << "A: Ferrari" << endl;
	cout << "B: Bertone" << endl;
	cout << "C: Lamborghini" << endl;
	cout << "D: Aston Martin" << endl;
	cin >> answer1;

	switch(answer1)
	{
		case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, Aston Martin!" << endl;
			cout << "Ferrari, Bertone, Lamborghini are Italian!" << endl;
			cout << "But Aston Martin is a Great-British brand!" << endl;
			cout << "Your total winnings is $0" << endl;
			return 0;

		case 'b':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, Aston Martin!" << endl;
			cout << "Ferrari, Bertone, Lamborghini are Italian!" << endl;
			cout << "But Aston Martin is a Great-British brand!" << endl;
			cout << "Your total winnings is $0"<< endl;
			return 0;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, Aston Martin!" << endl;
			cout << "Ferrari, Bertone, Lamborghini are Italian!" << endl;
			cout << "But Aston Martin is a Great-British brand!" << endl;
			cout << "Your total winnings is $0"<< endl;
			return 0;

		case 'd':
			cout << "\nThat is the right answer!" << endl;
			cout << "You just won $" << q1 << "!" << endl;
			break;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q2 = 1000;
	cout << "\n\nHere comes Question No. 2 for $" << q2 << "!" << endl;
	cout << "The International Court of Justice can be found in what city?" << endl;
	cout << "A: Amsterdam" << endl;
	cout << "B: Haag" << endl;
	cout << "C: Utrecht" << endl;
	cout << "D: Nijmegen" << endl;
	cin >> answer2;

	switch(answer2)
	{
		case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Haag!" << endl;
			cout << "The International Court of Justice is to be found in Haag, Netherlands." << endl;
			cout << "Your total winnings is $" << nothing << "!" << endl;
			return 0;

		case 'b':
			cout << "\nThat is the right answer!" << endl;
			cout << "You just won $" << q2 << "!" << endl;
			break;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Haag!" << endl;
			cout << "The International Court of Justice is to be found in Haag, Netherlands." << endl;
			cout << "Your total winnings is $" << nothing << "!" << endl;
			return 0;

		case 'd':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Haag!" << endl;
			cout << "The International Court of Justice is to be found in Haag, Netherlands." << endl;
			cout << "Your total winnings is $" << nothing << "!" << endl;
			return 0;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q3 = 2000;
	cout << "\n\nHere is the third question for $" << q3 << "!" << endl;
	cout << "In which year was the first modern Olympic Games held?" << endl;
	cout << "A: 1892" << endl;
	cout << "B: 1896" << endl;
	cout << "C: 1900" << endl;
	cout << "D: 1904" << endl;
	cin >> answer3;

	switch(answer3)
	{
		case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, 1896!" << endl;
			cout << "The first ever modern Olympic Games was help in 1896!" << endl;
			cout << "The host city was Athens!" << endl;
			cout << "Your total winnings is $" << nothing << endl;
			return 0;

		case 'b':
			cout << "\nThat is the right answer!" << endl;
			cout << "You just won $" << q3 << "!" << endl;
			break;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, 1896!" << endl;
			cout << "The first ever modern Olympic Games was help in 1896!" << endl;
			cout << "The host city was Athens!" << endl;
			cout << "Your total winnings is $" << nothing << endl;
			return 0;

		case 'd':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, 1896!" << endl;
			cout << "The first ever modern Olympic Games was help in 1896!" << endl;
			cout << "The host city was Athens!" << endl;
			cout << "Your total winnings is $" << nothing << endl;
			return 0;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q4 = 3000;
	cout << "\n\nQuestion No. 4 for $" << q4 << "!" << endl;
	cout << "When we purchase a 2 in 1 shower gel, it most likely contains shampoo and what?" << endl;
	cout << "A: Conditioner" << endl;
	cout << "B: After shave" << endl;
	cout << "C: Shaving cream" << endl;
	cout << "D: Tequila-flavoured beer" << endl;
	cin >> answer4;

	switch(answer4)
	{
		case 'a':
			cout << "\nThat is the correct answer!" << endl;
			cout << "You just won $" << q4 << "!" << endl;
			break;

		case 'b':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually A, Conditioner!" << endl;
			cout << "Those kinda shower gel are known as Shampoo & Conditioner!" << endl;
			cout << "Both of them are for our hair!" << endl;
			cout << "Your total winnings is $" << nothing << "!" << endl;
			return 0;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually A, Conditioner!" << endl;
			cout << "Those kinda shower gel are known as Shampoo & Conditioner!" << endl;
			cout << "Both of them are for our hair!" << endl;
			cout << "Your total winnings is $" << nothing << "!" << endl;
			return 0;

		case 'd':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually A, Conditioner!" << endl;
			cout << "Those kinda shower gel are known as Shampoo & Conditioner!" << endl;
			cout << "Both of them are for our hair!" << endl;
			cout << "Your total winnings is $" << nothing << "!" << endl;
			return 0;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q5 = 5000;
	cout << "\n\nOkay, last Easy-Tier Question! Here comes Question No. 5!" << endl;
	cout << "Which of the following US states are the westernmost?" << endl;
	cout << "A: Texas" << endl;
	cout << "B: Maine" << endl;
	cout << "C: Florida" << endl;
	cout << "D: California" << endl;
	cin >> answer5;

	switch(answer5)
	{
		case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, California!" << endl;
			cout << "Texas is the southernmost, Maine is really in\nthe north-east and Florida is in the south-east!" << endl;
			cout << "Your total winnings is $" << nothing << "!" << endl;
			return 0;

		case 'b':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, California!" << endl;
			cout << "Texas is the southernmost, Maine is really in\nthe north-east and Florida is in the south-east!" << endl;
			cout << "Your total winnings is $" << nothing << "!" << endl;
			return 0;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, California!" << endl;
			cout << "Texas is the southernmost, Maine is really in\nthe north-east and Florida is in the south-east!" << endl;
			cout << "Your total winnings is $" << nothing << "!" << endl;
			return 0;

		case 'd':
			cout << "That's the right answer!" << endl;
			cout << "You just won $" << q5 << "!" << endl;
			break;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
	}

	q6 = 10000;
	cout << "\n\nOkay, you successfully passed the Easy-Tier! Now you entered the Mid-Tier!" << endl;
	cout << "In this tier, the prizes are higher, but the question will be harder!" << endl;
	cout << "\nAnyways, here comes Question No. 6 for $" << q6 << "!" << endl;
	cout << "What does a smith usually make?" << endl;
	cout << "A: Barrels" << endl;
	cout << "B: Weapons" << endl;
	cout << "C: Shoes" << endl;
	cout << "D: Cables" << endl;
	cin >> answer6;

	switch(answer6)
	{
		case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Weapons!" << endl;
			cout << "The (black)smith's task to make weapons and gears!" << endl;
			cout << "Your total winnings is $" << q5 << endl;
			return 0;

		case 'b':
			cout << "\nThat is the right answer!" << endl;
			cout << "You just won $" << q6 << "!" << endl;
			break;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Weapons!" << endl;
			cout << "The (black)smith's task to make weapons and gears!" << endl;
			cout << "Your total winnings is $" << q5 << endl;
			return 0;

		case 'd':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Weapons!" << endl;
			cout << "The (black)smith's task to make weapons and gears!" << endl;
			cout << "Your total winnings is $" << q5 << endl;
			return 0;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q7 = 15000;
	cout << "\n\nQuestion No. 7 for $" << q7 << "!" << endl;
	cout << "What type of fish is used to make a rollmop?" << endl;
	cout << "A: Salmon" << endl;
	cout << "B: Trout" << endl;
	cout << "C: Cod" << endl;
	cout << "D: Herring" << endl;
	cin >> answer7;

	switch(answer7)
	{
		case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, Herring!" << endl;
			cout << "The ingredients of the rollmop is vinegar, sugar, water, salt, onions!" << endl;
			cout << "The only fish needed to complete the dish is Herring!" << endl;
			cout << "\nI'm so sorry, you just lost $" << q6 - q5 << "!" << endl;
			cout << "Your total winnings is $" << q5 << "!" << endl;
			return 0;

		case 'b':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, Herring!" << endl;
			cout << "The ingredients of the rollmop is vinegar, sugar, water, salt, onions!" << endl;
			cout << "The only fish needed to complete the dish is Herring!" << endl;
			cout << "\nI'm so sorry, you just lost $" << q6 - q5 << "!" << endl;
			cout << "Your total winnings is $" << q5 << "!" << endl;
			return 0;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, Herring!" << endl;
			cout << "The ingredients of the rollmop is vinegar, sugar, water, salt, onions!" << endl;
			cout << "The only fish needed to complete the dish is Herring!" << endl;
			cout << "\nI'm so sorry, you just lost $" << q6 - q5 << "!" << endl;
			cout << "Your total winnings is $" << q5 << "!" << endl;
			return 0;

		case 'd':
			cout << "That's the right answer!" << endl;
			cout << "You just won $" << q7 << "!" << endl;
			break;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
	}

	q8 = 20000;
	cout << "\n\nLet's see the eight question for $" << q8 << "!" << endl;
	cout << "In football, the 2017-18 Premier League season was won by which club?" << endl;
	cout << "A: Manchester City" << endl;
	cout << "B: Chelsea" << endl;
	cout << "C: Leicester City" << endl;
	cout << "D: Manchester United" << endl;
	cin >> answer8;

	switch(answer8)
	{
		case 'a':
			cout << "\nThat is the correct answer!" << endl;
			cout << "You just won $" << q8 << "!" << endl;
			break;

		case 'b':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually A, Manchester City!" << endl;
			cout << "Chelsea won last time in 2016-17, Leicester City made it\nin 2015-16 and Man United could make it in 2012-13!" << endl;
			cout << "I'm so sorry, but you lost $!" << q7 - q5 << "!" << endl;
			cout << "Your total winnings is $" << q5 << "!" << endl;
			return 0;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually A, Manchester City!" << endl;
			cout << "Chelsea won last time in 2016-17, Leicester City made it\nin 2015-16 and Man United could make it in 2012-13!" << endl;
			cout << "I'm so sorry, but you lost $!" << q7 - q5 << "!" << endl;
			cout << "Your total winnings is $" << q5 << "!" << endl;

		case 'd':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually A, Manchester City!" << endl;
			cout << "Chelsea won last time in 2016-17, Leicester City made it\nin 2015-16 and Man United could make it in 2012-13!" << endl;
			cout << "I'm so sorry, but you lost $!" << q7 - q5 << "!" << endl;
			cout << "Your total winnings is $" << q5 << "!" << endl;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q9 = 30000;
	cout << "\n\nHere is the 9th question for $" << q9 << "!" << endl;
	cout << "Which of these square numbers also happens\nto be the sum of two smaller square numbers?" << endl;
	cout << "A: 16" << endl;
	cout << "B: 25" << endl;
	cout << "C: 36" << endl;
	cout << "D: 49" << endl;
	cin >> answer9;

	switch(answer9)
	{
			case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, 25!" << endl;
			cout << "If you add up 9, which is 3 on the power of 2, and 16, 4 on the power of 2,\nyou'll get 25, which is 5 on the power of 2!" << endl;
			cout << "I'm sorry, you just lost $" << q8 - q5 << endl;
			cout << "Your total winnings is $" << q5 << endl;
			return 0;

		case 'b':
			cout << "\nThat is the right answer!" << endl;
			cout << "You just won $" << q9 << "!" << endl;
			break;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, 25!" << endl;
			cout << "If you add up 9, which is 3 on the power of 2, and 16, 4 on the power of 2,\nyou'll get 25, which is 5 on the power of 2!" << endl;
			cout << "I'm sorry, you just lost $" << q8 - q5 << endl;
			cout << "Your total winnings is $" << q5 << endl;
			return 0;

		case 'd':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, 25!" << endl;
			cout << "If you add up 9, which is 3 on the power of 2, and 16, 4 on the power of 2,\nyou'll get 25, which is 5 on the power of 2!" << endl;
			cout << "I'm sorry, you just lost $" << q8 - q5 << endl;
			cout << "Your total winnings is $" << q5 << endl;
			return 0;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q10 = 50000;
	cout << "\n\nOkay, we are on the way to pass the Mid-Tier!" << endl;
	cout << "It's gona be the last question of this tier." << endl;
	cout << "\nSo, here's question No. 10 for $" << q10 << "!" << endl;
	cout << "How many spaces are there on a standard Monopoly board?" << endl;
	cout << "A: 24" << endl;
	cout << "B: 36" << endl;
	cout << "C: 40" << endl;
	cout << "D: 56" << endl;
	cin >> answer10;

	switch(answer10)
	{
		case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually C, 40!" << endl;
			cout << "It's a tradition that every economy-based game has 40 squares on them!" << endl;
			cout << "I'm so sorry, but you lost $" << q9 - q5 << "!" << endl;
			cout << "Your total winnings is $" << q5 << endl;
			return 0;

		case 'b':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually C, 40!" << endl;
			cout << "It's a tradition that every economy-based game has 40 squares on them!" << endl;
			cout << "I'm so sorry, but you lost $" << q9 - q5 << "!" << endl;
			cout << "Your total winnings is $" << q5 << endl;
			return 0;

		case 'c':
			cout << "\nThat is the right answer!" << endl;
			cout << "You just won the guaranteed $" << q10 << "!" << endl;
			break;

		case 'd':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually C, 40!" << endl;
			cout << "It's a tradition that every economy-based game has 40 squares on them!" << endl;
			cout << "I'm so sorry, but you lost $" << q9 - q5 << "!" << endl;
			cout << "Your total winnings is $" << q5 << endl;
			return 0;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q11 = 75000;
	cout << "\n\nWell done, you just completed the Mid-Tier! Good job!" << endl;
	cout << "Now you enter the Hard Tier in which you get harder questions!" << endl;
	cout << "But, at the same time, you can earn higher amounts of points!" << endl;
	cout << "\nAlright, let's see the 11th question for $" << q11 << "!" << endl;
	cout << "On a computer, which of the following file extensions\nis NOT associated with a picture file?" << endl;
	cout << "A: .gif" << endl;
	cout << "B: .jpg" << endl;
	cout << "C: .bmp" << endl;
	cout << "D: .wma" << endl;
	cin >> answer11;

	switch(answer11)
	{
		case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, .wma!" << endl;
			cout << "Each of gif, jpg and bmp are kind of picture files!" << endl;
			cout << "Wma means Windows Media Audio!" << endl;
			cout << "Your total winnings is $" << q10 << "!" << endl;
			return 0;

		case 'b':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, .wma!" << endl;
			cout << "Each of gif, jpg and bmp are kind of picture files!" << endl;
			cout << "Wma means Windows Media Audio!" << endl;
			cout << "Your total winnings is $" << q10 << "!" << endl;
			return 0;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, .wma!" << endl;
			cout << "Each of gif, jpg and bmp are kind of picture files!" << endl;
			cout << "Wma means Windows Media Audio!" << endl;
			cout << "Your total winnings is $" << q10 << "!" << endl;
			return 0;

		case 'd':
			cout << "That's the right answer!" << endl;
			cout << "You just won $" << q11 << "!" << endl;
			break;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
	}

	q12 = 150000;
	cout << "\n\nHere comes the 12th question for $" << q12 << "!" << endl;
	cout << "What device was originally considered to be\nthe time machine in the Back to the Future trilogy?" << endl;
	cout << "A: School bus" << endl;
	cout << "B: Refrigirator" << endl;
	cout << "C: Sports car" << endl;
	cout << "D: Elevator" << endl;
	cin >> answer12;

	switch(answer12)
	{
		case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Refrigirator!" << endl;
			cout << "As we know, it turned out as a sports car,\nbut the original plan was to create it from a frigo!" << endl;
			cout << "I'm sorry, you just lost $" << q11 - q10 << endl;
			cout << "Your total winnings is $" << q10 << endl;
			return 0;

		case 'b':
			cout << "\nThat is the right answer!" << endl;
			cout << "You just won $" << q12 << "!" << endl;
			break;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Refrigirator!" << endl;
			cout << "As we know, it turned out as a sports car,\nbut the original plan was to create it from a frigo!" << endl;
			cout << "I'm sorry, you just lost $" << q11 - q10 << endl;
			cout << "Your total winnings is $" << q10 << endl;
			return 0;

		case 'd':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Refrigirator!" << endl;
			cout << "As we know, it turned out as a sports car,\nbut the original plan was to create it from a frigo!" << endl;
			cout << "I'm sorry, you just lost $" << q11 - q10 << endl;
			cout << "Your total winnings is $" << q10 << endl;
			return 0;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q13 = 250000;
	cout << "\n\nQuestion No. 13 for $" << q13 << "!" << endl;
	cout << "Whose first symphony is sometimes called Beethoven's 10th?" << endl;
	cout << "A: Pyotr Tchaikovsky" << endl;
	cout << "B: Johannes Brahms" << endl;
	cout << "C: Antonin Dvorak" << endl;
	cout << "D: Franz Schubert" << endl;
	cin >> answer13;

	switch(answer13)
	{
	case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Johannes Brahms!" << endl;
			cout << "Brahms was one of Beethoven's students and we helped Brahms with mastering his symphony!" << endl;
			cout << "I'm sorry, you just lost $" << q12 - q10 << endl;
			cout << "Your total winnings is $" << q10 << endl;
			return 0;

		case 'b':
			cout << "\nThat is the right answer!" << endl;
			cout << "You just won $" << q13 << "!" << endl;
			break;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Johannes Brahms!" << endl;
			cout << "Brahms was one of Beethoven's students and we helped Brahms with mastering his symphony!" << endl;
			cout << "I'm sorry, you just lost $" << q12 - q10 << endl;
			cout << "Your total winnings is $" << q10 << endl;
			return 0;

		case 'd':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually B, Johannes Brahms!" << endl;
			cout << "Brahms was one of Beethoven's students and we helped Brahms with mastering his symphony!" << endl;
			cout << "I'm sorry, you just lost $" << q12 - q10 << endl;
			cout << "Your total winnings is $" << q10 << endl;
			return 0;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q14 = 500000;
	cout << "\n\nHere we go, next up is the penultymate question for $" << q14 << "!" << endl;
	cout << "Pass laws were a type of legistation implemented mainly in what country?" << endl;
	cout << "A: China" << endl;
	cout << "B: Soviet Union" << endl;
	cout << "C: South Africa" << endl;
	cout << "D: Mexico" << endl;
	cin >> answer14;

	switch(answer14)
	{
			case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually C, South Africa!" << endl;
			cout << "This was a law about controlling urbanization\nand migrant workforce, and also to segregate the population!" << endl;
			cout << "I'm so sorry, but you lost $" << q13 - q10 << "!" << endl;
			cout << "Your total winnings is $" << q10 << endl;
			return 0;

		case 'b':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually C, South Africa!" << endl;
			cout << "This was a law about controlling urbanization\nand migrant workforce, and also to segregate the population!" << endl;
			cout << "I'm so sorry, but you lost $" << q13 - q10 << "!" << endl;
			cout << "Your total winnings is $" << q10 << endl;
			return 0;

		case 'c':
			cout << "\nThat is the right answer!" << endl;
			cout << "You just won $" << q14 << "!" << endl;
			break;

		case 'd':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually C, South Africa!" << endl;
			cout << "This was a law about controlling urbanization\nand migrant workforce, and also to segregate the population!" << endl;
			cout << "I'm so sorry, but you lost $" << q13 - q10 << "!" << endl;
			cout << "Your total winnings is $" << q10 << endl;
			return 0;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	q15 = 1000000;
	cout << "\n\nI can't believe I actually say this, but you are going for the million!" << endl;
	cout << "Final question, one million points on the line!" << endl;
	cout << "Good luck on this one too!" << endl;
	cout << "Which of the following countries was not among\nthe original twelve who adopted the euro in 2002?" << endl;
	cout << "A: Austria" << endl;
	cout << "B: Finland" << endl;
	cout << "C: Belgium" << endl;
	cout << "D: Denmark" << endl;
	cin >> answer15;

	switch(answer15)
	{
		case 'a':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, Denmark!" << endl;
			cout << "Their official currency was krone, also know as DKK!" << endl;
			cout << "The other three countries started using euro as it was introduced!" << endl;
			cout << "I'm so sorry, but you just lost $" << q14 - q10 << "!" << endl;
			cout << "Your total winnings is $" << q10 << "!" << endl;
			return 0;

		case 'b':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, Denmark!" << endl;
			cout << "Their official currency was krone, also know as DKK!" << endl;
			cout << "The other three countries started using euro as it was introduced!" << endl;
			cout << "I'm so sorry, but you just lost $" << q14 - q10 << "!" << endl;
			cout << "Your total winnings is $" << q10 << "!" << endl;
			return 0;

		case 'c':
			cout << "\nSorry, but it's the wrong answer!" << endl;
			cout << "The right one is actually D, Denmark!" << endl;
			cout << "Their official currency was krone, also know as DKK!" << endl;
			cout << "The other three countries started using euro as it was introduced!" << endl;
			cout << "I'm so sorry, but you just lost $" << q14 - q10 << "!" << endl;
			cout << "Your total winnings is $" << q10 << "!" << endl;
			return 0;

		case 'd':
			cout << "That's the right answer!" << endl;
			cout << "You just won $" << q15 << "!" << endl;
			cout << "You are a Millionaire from now!" << endl;
			break;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	cout << "\n\nWell done!" << endl;
	cout << "You just answered 15 questions correctly in a row!" << endl;
	cout << "Did you enjoy it?" << endl;
	cin >> choice;

	switch(choice)
	{
		case 'n':
			cout << "\nI'm so sorry to hear it! I'm always working\non the project so I hope next time you'll like it!" << endl;
			break;

		case 'y':
			cout << "\nI'm glad to hear this! Soon, I'll check-in with some improvements!" << endl;
			break;

		default:
			cout << "\nYou are totally an idiot! This is not an answer to the question!" << endl;
			cout << "Come back after you calmed down! Bye!" << endl;
			return 0;
	}

	cout << "\nUnfortunately, that is the end of the game!" << endl;
	cout << "Thanks for testing it!" << endl;
	cout << "Bye-Bye!" << endl;
	cout << "\nDevelopper: Dave Summer" << endl;
	cout << "All right reserved!" << endl;

	return 0;
}
