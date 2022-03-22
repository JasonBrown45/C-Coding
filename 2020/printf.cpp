#include <stdio.h>

int main()
{
  char name[101];
  scanf("%100[^\n]",name);
  printf("#include <stdio.h>\n");
  printf("int main()\n");
  printf("{\n");
  printf("\tprintf(\"%%s\\n\",\"%s\");\n",name);
  printf("\treturn 0;\n");
  printf("}\n");
  return 0;
}
