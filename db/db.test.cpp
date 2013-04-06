/*!
 * @copyright ryan jennings (arg3.com), 2013 under LGPL
 */
#include <igloo/igloo.h>
#include "base_record.h"
#include "select_query.h"
#include "sqldb.h"
#include "db.test.h"

using namespace igloo;

using namespace std;

using namespace arg3::db;

testsqldb testdb;

Context(sqldb_test)
{
    static void SetUpContext()
    {
        testdb.setup();

    }

    static void TearDownContext()
    {
        testdb.teardown();
    }

};

