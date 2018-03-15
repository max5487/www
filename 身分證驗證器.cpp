#include <iostream>
using namespace std;
int main(){
	cout <<"歡迎使用中華民國身分證驗證器"<<endl;
	char letter[2];
	cout <<"請輸入身分證第一個字母(大寫):";
	cin >> letter[1];
	
	char atn[3],num[10];
	int tof;
	switch (letter[1]){
		case 'A':
			atn[1] = 49;
			atn[2] = 48;
			break;
		case 'B':
			atn[1] = 49;
			atn[2] = 49;
			break;
		case 'C':
			atn[1] = 49;
			atn[2] = 50;
			break;
		case 'D':
			atn[1] = 49;
			atn[2] = 51;
			break;
		case 'E':
			atn[1] = 49;
			atn[2] = 52;
			break;
		case 'F':
			atn[1] = 49;
			atn[2] = 53;
			break;
		case 'G':
			atn[1] = 49;
			atn[2] = 54;
			break;
		case 'H':
			atn[1] = 49;
			atn[2] = 55;
			break;
		case 'J':
			atn[1] = 49;
			atn[2] = 56;
			break;
		case 'K':
			atn[1] = 49;
			atn[2] = 57;
			break;
		case 'L':
			atn[1] = 50;
			atn[2] = 48;
			break;
		case 'M':
			atn[1] = 50;
			atn[2] = 49; 
			break;
		case 'N':
			atn[1] = 50;
			atn[2] = 50; 
			break;
		case 'P':
			atn[1] = 50;
			atn[2] = 51;
			break;
		case 'Q':
			atn[1] = 50;
			atn[2] = 52;
			break;
		case 'R':
			atn[1] = 50;
			atn[2] = 53;
			break;
		case 'S':
			atn[1] = 50;
			atn[2] = 54;
			break;
		case 'T':
			atn[1] = 50;
			atn[2] = 55;
			break;
		case 'U':
			atn[1] = 50;
			atn[2] = 56;
			break;
		case 'V':
			atn[1] = 50;
			atn[2] = 57;
			break;
		case 'X':
			atn[1] = 51;
			atn[2] = 48;
			break;
		case 'Y':
			atn[1] = 51;
			atn[2] = 49;
			break;
		case 'I':
			atn[1] = 51;
			atn[2] = 52;
			break;
		case 'O':
			atn[1] = 51;
			atn[2] = 53;
			break;	
	} 
	
	cout <<"接著，請輸入剩餘的數字:";
	cin >> num;
	int id1 = atn[1] - 48,id2 = atn[2] - '0';
	id2 = id2*9;
	tof = id1 + id2;
	for ( int i = 0;i<7;i++){
		int a = num[i] - 48,b;
		b = 8-i;
		a = a*b;
		tof = tof + a ;
	}
	tof = tof + num[7] + num[8] - 96;
	switch (num[0]){
		case '1':
		case '2':
			if ( tof % 10 == 0){
				cout <<"格式正確";
				break;
			}
			cout <<"格式錯誤";
			break;
	}
}