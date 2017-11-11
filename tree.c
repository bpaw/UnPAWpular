typedef struct Tree {
  VTable * functions;
  TreeNode * root;
};

typedef struct TreeNode {
  char * data; 
  TreeNode * left;
  TreeNode * right;
};
