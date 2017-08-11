#ifndef AVL_H
#define AVL_H

#include <stdlib.h>

#ifndef TRUE
#define FALSE 0
#define TRUE !FALSE

#define ERROR_GENERAL_SYSTEM  10
#define ERROR_MEMORY_ALLOC    11
#define ERROR_GENERAL_AVL     20
#define ERROR_DOUBLE_HASH     21


typedef bool_t char;

#endif

typedef unsigned long int hash_t;

typedef struct node_ {
  struct node_ left;
  struct node_ right;

  hash_t hashCode;

  void *data;
}node _t;

node_t *createNode(node_t *root, hash_t hash, void *data);

node_t *insertNode(node_t *root, hash_t hash, bool_t free);

node_t *balanceTreeRecursive(node_t *root);

node_t *leftRotation(node_t *root);

node_t *rightRotation(node_t *root);

unsigned balanceFactor(node_t *root);

#endif
