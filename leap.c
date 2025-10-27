#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int year;
bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;  
            }
        } else {
            return true;
        }
    } else {
        return false;
    }  