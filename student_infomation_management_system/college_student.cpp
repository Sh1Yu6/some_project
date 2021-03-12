
/************************************************
#
#      Filename: college_student.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2021-03-12 11:02:43
# Last Modified: 2021-03-12 15:31:12
#***********************************************/
#include <iostream>
#include "college_student.h"
using namespace std;

namespace Sh1Yu6{
    
    CollegeStudent::CollegeStudent(std::string name, 
                                   std::string school,
                                   std::string cls,
                                   std::string sex,
                                   int id, 
                                   int age,
                                   std::string profess,
                                   std::string addr,
                                   std::string phoneNum)
                    : Student(name, school, cls, sex, id, age),
                      mProfessional{ profess },
                      mAddress{ addr },
                      mPhoneNum{ phoneNum }{
    }

    void CollegeStudent::setProfessional(std::string profess){
        mProfessional = profess;
    }
    std::string CollegeStudent::getProfessional() const{
        return mProfessional;
    }

    void CollegeStudent::setAddress(std::string addr){
        mAddress = addr;
    }
    std::string CollegeStudent::getAddress() const{
        return mAddress;
    }

    void CollegeStudent::setPhoneNum(std::string phoneNum){
        mPhoneNum = phoneNum;
    }
    std::string CollegeStudent::getPhoneNum() const{
        return mPhoneNum;
    }
} // Sh1Yu6
