#include <iostream>
#include <stack>
using namespace std;
/*int inorder1(elem *p){
    int d,md=0;
    Stack s;
    do {
        while (p!=NULL) {
            s.push(p);
            p=p->left;
        }
        p=s.pop();
        if (p==NULL) return lapas;
        if (p->left==NULL && p->right==NULL)lapas++;
        //if (p->data<min)
       //     min=p->data;
       // cout<<p->data;
        p=p->right;
        
    }while(1);
}
*/
/*int main(){
    stack<char> S;
    stack<char> D;
    char c;
    cin>>c;
    while (c!='.') {
        if (c=='#' && !S.empty()) {
            S.pop();
        }
        else{
            S.push(c);
        }
        cin>>c;
    }
    while (S.size()!=0) {
        D.push(S.top());
        S.pop();
    }
    while (D.size()!=0) {
        cout<<D.top();
        D.pop();
    }
    cout<<endl;
    return 0;
}
/*
int main (int argc, const char * argv[])
{
    queue<int> T;
    int ir;
    int mirst;
    cin>>ir;
    cin>>mirst;
    for(int i=1; i<=ir; i++){
        T.push(i);
        
    }
    while(T.size()!=1){
        for (int i=1; i<mirst; i++) {
            T.push(T.front());
            
            T.pop();
        }
        T.pop();    //Līķis
    }
    
    cout << T.front();
    return 0;
}

*/
int main (){
    int test=999999999;
    cout<<test;
    return 0;
}
