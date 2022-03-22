#include <stdio.h>

int main()
{
  char name[101];
  scanf("%[^\n]",name);
  printf("#include <stdio.h>\n");
  printf("int main()\n");
  printf("{\n");
  printf("    printf(\"%%s\\n\",\"%s\");\n",name);
  printf("    return 0;\n");
  printf("}\n");
  return 0;
}
