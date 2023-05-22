#include<bits/stdc++.h>
using namespace std;

/*// A Tree node
struct Node
{
	char ch;
	int freq;
	Node *left, *right;
};

// Function to allocate a new tree node
Node* getNode(char ch, int freq, Node* left, Node* right)
{
	Node* node = new Node();

	node->ch = ch;
	node->freq = freq;
	node->left = left;
	node->right = right;

	return node;
}
// Comparison object to be used to order the heap
struct comp
{
	bool operator()(Node* l, Node* r)
	{
		// highest priority item has lowest frequency
		return l->freq > r->freq;
	}
};*/
void buildHuffmanTree(string text)
{
	// count frequency of appearance of each character
	// and store it in a map
	unordered_map<char, int> freq;
	for (char ch: text) {
		freq[ch]++;
	}
     while(n!=1){
            for(int i=1;i<=n;i++){
                for (int j=i+1;j<=n;j++){
                    if(<)
                }
            }
        }
    }
    void encode(){

    }
   /* priority_queue<Node*, vector<Node*>, comp> pq;
     for (auto pair: freq) {
		pq.push(getNode(pair.first, pair.second, nullptr, nullptr));
	}*/
    
    int main(){string text;int n;
        cout<<"Enter message to compress";
        cin>>text;
        buildHuffmanTree(text);
       