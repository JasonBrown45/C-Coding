#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
    int angka;
    char nama[100];
    struct node *left, *right;
} *root = 0;

struct node* push(struct node *curr, int angka, char nama[]) {
    if (curr == 0) {
        curr = (struct node*)malloc(sizeof(struct node)); // curr = new node();
        curr->angka = angka;
        strcpy(curr->nama, nama);
        curr->left = curr->right = 0;
    } else {
        if(angka < curr->angka) { //left
            curr->left = push(curr->left, angka, nama);
        } else if(curr->angka < angka) { // right
            curr->right = push(curr->right, angka, nama);
        }
    }
    return curr;
}

void inOrder(struct node *curr) { // l m r
    if (curr != 0) {
        inOrder(curr->left);
        printf("%d, ", curr->angka);
        inOrder(curr->right);
    }
}

void viewTree(struct node *curr, int depth) { // l m r
    if (curr != 0) {
        viewTree(curr->right, depth + 1);
        for(int i=0;i<depth;i++) printf("\t");
        printf("%d %s\n", curr->angka, curr->nama);
        viewTree(curr->left, depth + 1);
    }
}

void preOrder(struct node *curr) { // m l r
    if (curr != 0) {
        printf("%d, ", curr->angka);
        preOrder(curr->left);
        preOrder(curr->right);
    }
}

void postOrder(struct node *curr) { // l r m
    if (curr != 0) {
        postOrder(curr->left);
        postOrder(curr->right);
        printf("%d, ", curr->angka);
    }
}

struct node *find(struct node *curr, int angka) {
    if(curr != 0) {
        if(curr->angka == angka) {
            return curr;
        } else if(angka < curr->angka) {
            return find(curr->left, angka);
        } else {
            return find(curr->right, angka);
        }
    }
    return 0;
}

struct node *mostRight(struct node *curr) {
    if(curr != 0) {
        if(curr->right != 0) {
            return mostRight(curr->right);
        } else {
            return curr;
        }
    }
    return 0;
}

struct node *pop(struct node *curr, int angka) {
    if(curr != 0) {
        if(curr->angka == angka) {
            if(curr->left == 0 && curr->right == 0) { // tidak punya anak
                free(curr);
                return 0;
            } else if(curr->left != 0 && curr->right != 0) { // punya 2 anak
                struct node *temp = mostRight(curr->left);
                curr->angka = temp->angka;
                strcpy(curr->nama, temp->nama);
                curr->left = pop(curr->left, temp->angka);
                return curr;
            } else { // punya 1 anak
                struct node *temp;
                if(curr->left != 0) { // left
                    temp = curr->left;
                } else { // right
                    temp = curr->right;
                }
                free(curr);
                return temp;
            }
        } else if(angka < curr->angka) {
            curr->left = pop(curr->left, angka);
        } else {
            curr->right = pop(curr->right, angka);
        }
    }
    return curr;
}

int main() {
    char list[][100] = {
        "Samuel",       //  7
        "Nathaniel",    // 49
        "Felix",        // 73
        "Christian",    // 58
        "Jerrian",      // 30
        "Georgius",     // 72
        "Steven",       // 44
        "Ryan",         // 78
        "Valencia",     // 23
        "Wilbert",      //  9
    };
    for (int i = 0; i < 10; i++) {
        int a = rand() % 100;
        printf("%d, ", a);
        root = push(root, a, list[i]);
    }
    printf("\n");
    inOrder(root); printf("\n");
    preOrder(root); printf("\n");
    postOrder(root); printf("\n");
    root = pop(root, 9);
    viewTree(root, 0); printf("\n");
    root = pop(root, 7);
    viewTree(root, 0); printf("\n");
    root = pop(root, 49);
    viewTree(root, 0); printf("\n");
    // struct node *b = mostRight(root);
    // if(b == 0) {
    //     printf("Tidak ketemu!\n");
    // } else {
    //     printf("Ketemu! %d %s\n", b->angka, b->nama);
    // }
    return 0;
}