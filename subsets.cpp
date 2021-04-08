#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;

  cout<<"n=";
  cin>>n;

  vector<int> stack;

  stack.push_back(1);

  for (size_t i = 0; i < stack.size(); i++) {

       cout<<stack[i];
  }
  cout<<"\n";

  while(!stack.empty()) {

        if ( stack.back() < n ) {

              stack.push_back(stack.back()+1);

        } else {

               stack.pop_back();

               if(!stack.empty()) stack.back()++;
        }

        for (size_t i = 0; i < stack.size(); i++) {

             cout<<stack[i]<<" ";
        }
        cout<<"\n";
  }

  return 0;
}
