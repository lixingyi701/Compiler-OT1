#include <iostream>
#include <dirent.h>
#include <unistd.h>
#include "nfa.h"
#include<cstring>
using namespace std;


void test()
{
//    reg expression: a(a*|bcd(e*|a))*|b|c
//    Right result: 16 18
//    string reg = "a(a*|bcd(e*|a))*|b";
//    NFA nfa = NfaMananger::getNFA(reg);

    //NfaMananger mynfa("ab(c|d)*x*");
    NfaMananger mynfa("(a|b)*abb");
    cout << mynfa.nfa.nodeNums << endl;
    //经测试，NFA节点个数（12）正确，DFA个数(5->4)没有成功最小化
    cout << "Test done!" << endl;
}

int main(int argc, char *argv[])
{
   test();


   return 0;
}