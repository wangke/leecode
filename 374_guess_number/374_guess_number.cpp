/*************************************************************************
	> File Name: 374_guess_number.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年07月28日 星期四 22时26分50秒
 ************************************************************************/

 //1. 类没有定义对象的时候不能调用其中的函数，除了static函数
 //2. 两个大int相加产生的越界

#include<iostream>
using namespace std;

int guess(int num){
    if(num > 1702766719)
        return -1;
    else if (num == 1702766719)
        return 0;
    else
        return 1;
};

class Solution {
    public:
    int guessNumber(int n){
        long start = 1;
        long end = n;
        long guess_num = (1+n)/2;
        int guess_res = guess(guess_num);
        while(guess_res != 0){
            if(guess_res == 1)
                start = guess_num + 1;
            else
                end = guess_num - 1;
            guess_num = (start + end)/2;
            if (guess_num < 0)
            {
                cout << "wrong";
                break;
            }

            guess_res = guess(guess_num);
            if (start == end)
                break;

        }
        return guess_num;
    }
};

int main(){
    int n;
    Solution solute;
    cin >> n;
    cout << solute.guessNumber(n) << endl;
}

