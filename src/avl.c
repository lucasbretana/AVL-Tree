#include "avl.h"

node_t *createNode(node_t *root, hash_t hash, void *data)
{
  node_t *newNode = NULL;

 /* do{
    if(root == NULL){
      newNode = calloc(1, sizeof(node_t));
      if(newNode == NULL){
        fprintf(stderr, "There was some error alocation memory for a new node.\nThe given data was root: %p, hash:  %lu", root, hash);
        exit(ERROR_MEMORY_ALLOC);
      }
      newNode->hashCode   = hash;
      newNode->left       = NULL;
      newNode->right      = NULL;
      newNode->data       = data;
    }else{
      if(hash < root->hash){
        root = root->left;
      }else if(hash > root->hash){
        root = root->left;
      }else{
        fprintf(stderr, "Duplicated hash are not allowed on the AVL Tree.\n");
        fprintf(stderr, "The data of the node with the same hash are: ");
        fprintf(stderr, "\thash: %lu, left  child hash: %lu, right child hash: %lu", root->hash, root->left->hash, root->riht->hash);
        exit(ERROR_DOUBLE_HASH);
      }
    }
  while(newNode == NULL);
*/
  return newNode;
}
