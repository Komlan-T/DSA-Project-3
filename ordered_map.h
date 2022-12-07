#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include "Hospital.h"
using namespace std;

class ordered_map {
    struct Node {
        Hospital hospital;
        Node* left;
        Node* right;

        Node(Hospital h) {
            hospital = h;
            left = nullptr;
            right = nullptr;
        }
    };

public:
    int nodeCount;
    Node* root;
    ordered_map() {
        nodeCount = 0;
        root = nullptr;
    }
    ~ordered_map();
    void Destructor(Node* root);
    void insert(Hospital& hospital);
    Node* insertHelper(Node* root, Hospital& hospital);
    Node* splay(Node* root, Hospital& Hospital);
    void erase(string key);
    Node* eraseHelper(Node* root, string key);
    void traverse();
    void traverseHelper(Node* root);
    Node* zigRight(Node* root);
    Node* zagLeft(Node* root);
    void printRoot() {
        cout << "Root: " << root->hospital.name << endl;
    }

};

ordered_map::~ordered_map() {
    //cout << "The destructor was called" << endl;
    Destructor(root);
}

void ordered_map::Destructor(Node* root) {
    if (root->left != nullptr) {
        Destructor(root->left);
    }
    if (root->right != nullptr) {
        Destructor(root->right);
    }
    delete root;
    //cout << "Node deleted" << endl;
    return;
}

void ordered_map::insert(Hospital& hospital) {
    this->root = insertHelper(root, hospital);
}

ordered_map::Node* ordered_map::insertHelper(Node* root, Hospital& hospital) {
    if (root == nullptr) {
        return new Node(hospital);
    }
    if (hospital.name <= root->hospital.name) {
        root->left = insertHelper(root->left, hospital);
    }
    else if (hospital.name > root->hospital.name) {
        root->right = insertHelper(root->right, hospital);
    }
    // splay up the new value after insertion
    root = splay(root, hospital);
    return root;
}

ordered_map::Node* ordered_map::splay(Node* root, Hospital& hos) {
    if (root == nullptr) {
        return root;
    }
    if (root->hospital.name == hos.name) {
        return root;
    }

    if (hos.name < root->hospital.name)
    {
        // Perform BST Search for the target element 
        if (hos.name < root->left->hospital.name) {
            // NULL CHECK
            if (root->left == nullptr) {
                return root;
            }
            //test for Zig-Zig (Left-Left Bias)
            if (hos.name < root->left->hospital.name) {
                //this will bring the desire splay value to left left
                root->left->left = splay(root->left, hos);
            }
            root = zigRight(root);

        }

        else if (hos.name > root->left->hospital.name) {
            //iterate down the right sub branch
            root->left->right = splay(root->left->right, hos);

            if (root->left->right != nullptr)
            {
                root->left = zagLeft(root->left);
            }
        }
        if (root->left == nullptr) {
            return root;
        }
        else {
            return zigRight(root);
        }
    }

    //iterate down the right branches to find the key
    else {
        // NULL CHECK
        if (root == nullptr) {
            return root;
        }

        if (hos.name > root->right->hospital.name) {
            root->right->right = splay(root->right->right, hos);
            root = zagLeft(root);
        }
        else if (hos.name < root->right->hospital.name) {
            root->right->left = splay(root->right->left, hos);

            // NULL CHECK
            if (root->right->left != nullptr) {
                root->right = zigRight(root);
            }
        }
        if (root->right != nullptr) {
            return zagLeft(root);
        }
        else {
            return root;
        }
    }
    return root;
}

ordered_map::Node* ordered_map::zigRight(Node* root) {
    Node* newParent = root->left;
    Node* grandchild = root->left->right;
    newParent->right = root;
    root->left = grandchild;
    return newParent;
}

ordered_map::Node* ordered_map::zagLeft(Node* root) {
    Node* newParent = root->right;
    Node* grandchild = root->right->left;
    newParent->left = root;
    root->right = grandchild;
    return newParent;
}

void ordered_map::erase(string key) {
    this->root = eraseHelper(root, key);
}

// when deleting a node remember to splay up the parent of the deleted node
ordered_map::Node* ordered_map::eraseHelper(Node* root, string name) {
    // NULL CHECK
    if (root == nullptr) {
        return nullptr;
    }

    if (name < root->hospital.name) {
        root->left = eraseHelper(root->left, name);
    }

    else if (name > root->hospital.name) {
        root->right = eraseHelper(root->right, name);
    }
    else
    {
        Node* tempNode = root;

        if (tempNode->left == nullptr && tempNode->right == nullptr) {
            delete root;
            return nullptr;
        }
        else if ((tempNode->left != nullptr && tempNode->right == nullptr) || (tempNode->left == nullptr && tempNode->right != nullptr)) {
            if (tempNode->right == nullptr) {
                delete root;
                return tempNode->left;
            }
            else {
                delete root;
                return tempNode->right;
            }
        }
        else {
            Node* inorder_successor = root->right;
            while (inorder_successor->right != nullptr) {
                inorder_successor = inorder_successor->right;
            }
            root->hospital = inorder_successor->hospital;
            root->left = eraseHelper(root->left, inorder_successor->hospital.name);
        }
    }
    root = splay(root, root->hospital);
    return root;
}
void ordered_map::traverse() {
    traverseHelper(root);
}
void ordered_map::traverseHelper(Node* root) {
    // NULL CHECK
    if (root == nullptr) {
        return;
    }
    traverseHelper(root->left);
    cout << root->hospital.name << endl;
    traverseHelper(root->right);
    return;
}