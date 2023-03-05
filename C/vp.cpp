#include <iostream>
using namespace std;
bool ispal(int x);
int main() {
    int x;
    cin >> x;
    if (ispal(x)){
  cout << "Hello World!";
  return 0;
}
}

bool ispal(int x){
        if(x<0|| (x!=0 &&x%10==0)) return false;
        int sum=0;
        while(x>sum)
        {
            sum = sum*10+x%10;
            x = x/10;
        }
        return (x==sum)||(x==sum/10);
}