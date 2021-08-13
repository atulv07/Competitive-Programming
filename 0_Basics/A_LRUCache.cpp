#include<bits/stdc++.h>
using namespace std;

// Least Recently Used Cache (a caching algorithm)
// Given total possible page numbers that can be referred and cache (or memory) size (Number of page frames that cache can hold at a time)
// The LRU caching scheme is to remove the least recently used frame when the cache is full and a new page is referenced which is not there in cache.

// get(key) returns the value of key if present else -1
// put(key, value) put in cache data structure
// 		if capacity is full remove the least recently used key and then insert
// both these operations are of TC O(1)
// O(capacity) space

// We use two data structures to implement an LRU Cache.  
// 1. Queue which is implemented using a doubly linked list. The maximum size of the queue will be equal to the total number of frames available (cache size).
// 	  The most recently used pages will be near front end and least recently pages will be near the rear end. 
// 2. A Hash Map with page number as key and address of the corresponding queue node as value.


class LRUCache {
public:
	class node {
	public:
		int key;
		int val;
		node* next, *prev;
		node(int k, int v) {
			key = k;
			val = v;
		}
	};

	int capacity;
	unordered_map<int, node*> um;
	node* head = new node(-1, -1);
	node* tail = new node(-1, -1);
	LRUCache(int cap) {
		capacity = cap;
		head->next = tail;
		tail->prev = head;
	}

	void addNode(node* newNode) {
		node* temp = head->next;
		head->next = newNode;
		newNode->prev = head;
		newNode->next = temp;
		temp->prev = newNode;
	}

	void deleteNode(node* delNode) {
		node* delPrev = delNode->prev;
		node* delNext = delNode->next;
		delPrev->next = delNext;
		delNext->prev = delPrev;
	}

	int get(int k) {
		// if key is present
		if(um.find(k) != um.end()) {
			node* curN = um[k];
			// value of key
			int v = curN->val;
			// remove node
			deleteNode(curN);
			// insert node to the next of head
			addNode(curN);
			um[k] = head->next;
			return v;
		}
		// key is not present
		return -1;
	}

	void put(int k, int v) {
		// if key k is present
		if(um.find(k) != um.end()) {
			// remove node
			node* curN = um[k];
			um.erase(k);
			deleteNode(curN);
		}
		// if the capacity is full remove the last node
		if(um.size() == capacity) {
			node* lastNode = tail->prev;
			um.erase(lastNode->key);
			deleteNode(lastNode);
		}
		// Insert the node with key k and value v next to the head
		node* newNode = new node(k, v);
		addNode(newNode);
		um[k] = head->next;
	}
};