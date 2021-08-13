#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define all(x) (x).begin(), (x).end()

struct node {
	int data;
	struct node *left, *right;
	node(int d) {
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};

struct node* newNode(int val) {
	// struct node* temp = (struct node*)malloc(sizeof(struct node));
	// temp->data = val;
	struct node* temp = new struct node(val);
	// temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct node* root) {
	if(root != NULL) {
		inorder(root->left);
		cout << root->data << "\n";
		inorder(root->right);
	}
}

struct node* insert(struct node* root, int val) {
	if(root == NULL) return newNode(val);
	if(val > root->data) root->right = insert(root->right, val);
	else root->left = insert(root->left, val);
	return root;
}

struct node* search(struct node *root, int x) {
	if(root == NULL || root->data == x) return root;
	if(x < root->data) return search(root->left, x);
	return search(root->right, x);
}

struct node* minValNode(struct node* root) {
	struct node* temp = root;
	while(temp && temp->left)
		temp = temp->left;
	return temp;
}

struct node* deleteNode(struct node* root, int val) {
	if(root == NULL)
		return root;
	if(val > root->data)
		root->right = deleteNode(root->right, val);
	else if(val < root->data)
		root->left = deleteNode(root->left, val);
	else {
		// delete node
		if(root->left == NULL && root->right == NULL)
			return NULL;
		else if(root->left == NULL) {
			struct node* temp = root->right;
			delete root;
			return temp;
		}
		else if(root->right == NULL) {
			struct node* temp = root->left;
			delete root;
			return temp;
		}
		else {
			// node with two children: Get the inorder successor
			// (smallest in the right subtree)
			// Inorder successor is always either a leaf node or a node with empty left child
			struct node* temp = minValNode(root->right);
			// Copy the inorder successor's content to this node
			root->data = temp->data;
			// Delete the inorder successor
			root->right = deleteNode(root->right, temp->data);
		}
	}
	return root;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	/* Let us create following BST
		  50
		/	 \
	   30	 70
	  / \    / \
	20  40  60 80 */
	struct node* root = NULL;
	root = insert(root, 50);
	root = insert(root, 20);
	root = insert(root, 30);
	root = insert(root, 40);
	root = insert(root, 70);
	root = insert(root, 60);
	root = insert(root, 80);
 
	cout << "Inorder traversal of the given tree \n";
	inorder(root);
 
	cout << "\nDelete 20\n";
	root = deleteNode(root, 20);
	cout << "Inorder traversal of the modified tree \n";
	inorder(root);
 
	cout << "\nDelete 30\n";
	root = deleteNode(root, 30);
	cout << "Inorder traversal of the modified tree \n";
	inorder(root);
 
	cout << "\nDelete 50\n";
	root = deleteNode(root, 50);
	cout << "Inorder traversal of the modified tree \n";
	inorder(root);
	return 0;
}