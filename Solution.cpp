#include<iostream>
#include<set>

using namespace std;

int main(){
    // I am using a set because there are many possible combination of c and i for the same mark(s).
    // Example :-
    // c = 1 i = 4 mark = 0
    // c = 0 i = 0 mark = 0
    set<int> s;
    for(int c = 0; c <= 75; c++)
        for(int i = 0; i <= 75 - c; i++)
            s.insert(4*c - i);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(s.find(n) != s.end()) cout << "POSSIBLE\n";
        else cout << "IMPOSSIBLE\n";
    }
    return 0;
}