//
//  M A R I A D B + +
//
//          Copyright The ViaDuck Project 2016 - 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)



#include <string>
#include <RP_DatabaseConnector/types.h>
#include <RP_DatabaseConnector/conversion_helper.h>

namespace mariadb {
class decimal {
public:
    explicit decimal(std::string str = "") : mStr(std::move(str)) {}

    std::string str() const {
        return mStr;
    }

    f32 float32() const {
        return string_cast<f32>(mStr);
    }

    f64 double64() const {
        return string_cast<f64>(mStr);
    }

private:
    std::string mStr;
};
}  // namespace mariadb

