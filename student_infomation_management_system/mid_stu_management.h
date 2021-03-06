
/************************************************
#
#      Filename: mid_stu_management.h
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2021-03-12 15:07:29
# Last Modified: 2021-03-12 15:07:29
#***********************************************/

#ifndef __MID_STU_MANAGEMENT_H_
#define __MID_STU_MANAGEMENT_H_

#include <unordered_map>
#include "student_management.h"
#include "middle_student.h"
namespace Sh1Yu6{

    class MidStuManagement: public StuManagement{
        public:
            void add() override;

            bool queryById(int id) override;

            bool queryByName(std::string str) override;

            void display() override;

            void edit() override;

            void del() override;

            void statisticsTotal() override;

            void statisticsByGender() override;

            void statisticsByAge() override;

            void save() override;

            void read() override;

        private:
            std::unordered_map<int, MiddleStudent> stus;
            void displayTitle();

    };
} // Sh1Yu6

#endif // __MID_STU_MANAGEMENT_H_
