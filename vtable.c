typedef struct VTable {
  int (* size)(void * tree);
  char (*min)(void * tree);
  char (*max)(void * tree);
  void (*print)(void * tree);
};
