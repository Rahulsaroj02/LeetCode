class Solution {
public:

    int fuct(string date){
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int day=stoi(date.substr(8));
        int sum=0;
        for(int i=1900;i<year;i++){
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
                sum+=366;
            }else{
                sum+=365;
            }
        }
        int flag=0;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            flag=1;
        }
        vector<int> daysInMonth = {31,28,31,30,31,30,31,31,30,31,30,31};
        for(int i=0;i<month-1;i++){
            if(flag==1 && i==1){
                sum+=29;
                continue;
            }
            sum+=daysInMonth[i];
        }
        sum+=day;


        return sum;
    }
    int daysBetweenDates(string date1, string date2) {
        int sum1=fuct(date1);
        int sum2=fuct(date2);

        return abs(sum1-sum2);
    }
};