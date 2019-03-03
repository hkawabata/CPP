#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


void example3(ifstream &file);
int rank_of_vector(vector<int> &v, int i);


/**
 * usage: g++ -std=c++11 ${cpp_file} && ./a.out ${input_data_file}
 */
int main(int argc, char *argv[]) {

    cout << "例題3" << endl;
    ifstream file_ex3(argv[1]);
    example3(file_ex3);

    return 0;
}

void example3(ifstream &file) {
    vector<int> v;
    int buf;
    while ( file >> buf ) v.push_back(buf);
    cout << "value, rank" << endl;
    for (int i = 0; i < v.size(); i++) cout << v[i] << ", " << rank_of_vector(v, i) << endl;
}

/**
 * vector の指定番目の要素の順位を調べる
 */
int rank_of_vector(vector<int> &v, int i) {
    int rank = 1;
    for (auto n: v) if (n > v[i]) rank++;
    return rank;
}