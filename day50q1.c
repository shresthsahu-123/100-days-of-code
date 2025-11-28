#include <stdio.h>
#include <string.h>

const char* getMonthName(int month) {
    const char* months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                           "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return months[month];
}

void convertDateFormat(char date[]) {
    int day, month, year;
    
    // Parse dd/mm/yyyy format
    sscanf(date, "%d/%d/%d", &day, &month, &year);
    
    // Format as dd-MMM-yyyy
    sprintf(date, "%02d-%s-%04d", day, getMonthName(month), year);
}

int main() {
    char date[20];
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);
    
    convertDateFormat(date);
    printf("Converted: %s\n", date);
    
    return 0;
}
