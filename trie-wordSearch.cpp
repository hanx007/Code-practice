

#include <iostream>
#include <unordered_map>
using namespace std;
class Node{
    
    public:
    char data;
    //store the address of children of current node
    unordered_map<char,Node*> children;
    bool isTerminal;
    Node(char d){
        data=d;
        isTerminal=false;
    }
};

class Trie{
    Node* root;
    //1.add the string
    //2.search for the given string
    public:
    Trie(){
        root=new Node('\0');
    }
    void addWord(string s){
        //keep a temporary pointer
        Node* temp=root;
        //iterate over each character
        for(char ch:s){
            if(temp->children.count(ch)==0){
                Node* n=new Node(ch);
                temp->children[ch]=n;
                
            }
            //node already exists or have been created 
            temp=temp->children[ch];
        }
        //last step 
        temp->isTerminal=true;
        
    }
    bool wordSearch(string query){
            Node* temp=root;
            for(auto ch:query){
                if(temp->children.count(ch)==0){
                    return false;
                }
                temp=temp->children[ch];
            }
            return temp->isTerminal;

    }
    
};

int main()
{
    Trie t;
    string words[]={"a","apple","ape","go","goa","gone"};
    for(auto w:words){
        t.addWord(w);
    }
    string queries[]={"goat","a","an","gone"};
    for(auto q:queries){
        std::cout << q<<" " <<t.wordSearch(q)<<std::endl;
    }
    return 0;
}
