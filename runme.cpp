#include <bits/stdc++.h>

using namespace std;

string const BRUTE = "BRUTE";//file code trâu
string const SOL = "SOL";//file code cần kiểm tra
string const NAME = "A"; //file input,output và ans
string const C_VERSION = "14"; //flag version c++
int const N = 100; //số lượng test cần chạy.

void compile(string file){
	const string com = "g++ -std=c++" + C_VERSION + " " + file + ".cpp -o " + file; 
	system(com.c_str()); 
}

void run(string file){
	const string com = ".\\" + file;
	system(com.c_str()); 
}

int main(){
	compile(BRUTE);
	compile(SOL);
	compile("gen");

	for (int t = 1; t <= N; t++){
		cout << "TESTCASE #" << t << ": ";

		run("gen");
		run(BRUTE); 
		run(SOL); 

		string com = "FC " + NAME + ".ans " + NAME + ".out";
		if (system(com.c_str())){
			cout << "WA\n";
			return 0;
		}else cout << "AC\n";
	}
	cerr << "Done. All gud.";
	return 0;
}
