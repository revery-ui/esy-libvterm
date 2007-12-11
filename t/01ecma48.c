#include "CUnit/CUnit.h"

#include "ecma48.h"

ecma48_t *e48;

static void size_test(void)
{
  ecma48_set_size(e48, 100, 40);

  int rows, cols;
  ecma48_get_size(e48, &rows, &cols);

  CU_ASSERT_EQUAL(rows, 100);
  CU_ASSERT_EQUAL(cols, 40);
}

CU_TestInfo ecma48_tests[] = {
  { "size", size_test },
  CU_TEST_INFO_NULL,
};

int ecma48_init(void)
{
  e48 = ecma48_new();
  return e48 ? 0 : 1;
}

int ecma48_fini(void)
{
  // TODO: free
  return 0;
}
