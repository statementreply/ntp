/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "config.h"
#include "ntp.h"
#include "ntp_calendar.h"
#include "ntp_stdlib.h"
#include "ntp_leapsec.h"
#include "test-libntp.h"
#include <string.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_ValidateGood(void);
extern void test_ValidateNoHash(void);
extern void test_ValidateBad(void);
extern void test_ValidateMalformed(void);
extern void test_ValidateMalformedShort(void);
extern void test_ValidateNoLeadZero(void);
extern void test_tableSelect(void);
extern void test_loadFileExpire(void);
extern void test_loadFileTTL(void);
extern void test_lsQueryPristineState(void);
extern void test_ls2009faraway(void);
extern void test_ls2009weekaway(void);
extern void test_ls2009houraway(void);
extern void test_ls2009secaway(void);
extern void test_ls2009onspot(void);
extern void test_ls2009nodata(void);
extern void test_ls2009limdata(void);
extern void test_qryJumpFarAhead(void);
extern void test_qryJumpAheadToTransition(void);
extern void test_qryJumpAheadOverTransition(void);
extern void test_addDynamic(void);
extern void test_taiEmptyTable(void);
extern void test_taiTableFixed(void);
extern void test_taiTableDynamic(void);
extern void test_taiTableDynamicDeadZone(void);
extern void test_ls2009seqInsElectric(void);
extern void test_ls2009seqInsDumb(void);
extern void test_ls2009seqDelElectric(void);
extern void test_ls2009seqDelDumb(void);
extern void test_ls2012seqInsElectric(void);
extern void test_ls2012seqInsDumb(void);
extern void test_lsEmptyTableDumb(void);
extern void test_lsEmptyTableElectric(void);


//=======Suite Setup=====
static void suite_setup(void)
{
extern int change_iobufs(int);
extern int change_logfile(const char*, int);
change_iobufs(1);
change_logfile("stderr", 0);
}

//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}

char const *progname;


//=======MAIN=====
int main(int argc, char *argv[])
{
  progname = argv[0];
  suite_setup();
  UnityBegin("leapsec.c");
  RUN_TEST(test_ValidateGood, 328);
  RUN_TEST(test_ValidateNoHash, 338);
  RUN_TEST(test_ValidateBad, 348);
  RUN_TEST(test_ValidateMalformed, 358);
  RUN_TEST(test_ValidateMalformedShort, 368);
  RUN_TEST(test_ValidateNoLeadZero, 378);
  RUN_TEST(test_tableSelect, 393);
  RUN_TEST(test_loadFileExpire, 430);
  RUN_TEST(test_loadFileTTL, 448);
  RUN_TEST(test_lsQueryPristineState, 481);
  RUN_TEST(test_ls2009faraway, 495);
  RUN_TEST(test_ls2009weekaway, 514);
  RUN_TEST(test_ls2009houraway, 533);
  RUN_TEST(test_ls2009secaway, 552);
  RUN_TEST(test_ls2009onspot, 571);
  RUN_TEST(test_ls2009nodata, 590);
  RUN_TEST(test_ls2009limdata, 609);
  RUN_TEST(test_qryJumpFarAhead, 632);
  RUN_TEST(test_qryJumpAheadToTransition, 655);
  RUN_TEST(test_qryJumpAheadOverTransition, 678);
  RUN_TEST(test_addDynamic, 705);
  RUN_TEST(test_taiEmptyTable, 891);
  RUN_TEST(test_taiTableFixed, 905);
  RUN_TEST(test_taiTableDynamic, 919);
  RUN_TEST(test_taiTableDynamicDeadZone, 947);
  RUN_TEST(test_ls2009seqInsElectric, 969);
  RUN_TEST(test_ls2009seqInsDumb, 1014);
  RUN_TEST(test_ls2009seqDelElectric, 1063);
  RUN_TEST(test_ls2009seqDelDumb, 1108);
  RUN_TEST(test_ls2012seqInsElectric, 1152);
  RUN_TEST(test_ls2012seqInsDumb, 1197);
  RUN_TEST(test_lsEmptyTableDumb, 1248);
  RUN_TEST(test_lsEmptyTableElectric, 1271);

  return (UnityEnd());
}
