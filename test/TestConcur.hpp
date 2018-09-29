#ifndef TEST_CONCUR_H
#define TEST_CONCUR_H

#include "TestClient.hpp"
#include "boost/thread.hpp"

class CTestConcur : public CTestClient
{
public:
    CTestConcur();
    bool StartTest(const std::string &strHost);

private:
    void Test_GetS();
    void Test_Get();
    void Test_Set();

private:
    bool m_bExit;
    boost::mutex m_mutex;
};

#endif
