// INFO: Headers from the standard library should be inserted at the top via
#include <cmath>
double percentage_modifier() { return 0.01; }
double daily_billable_hours() { return 8; }
double monthly_billable_days() { return 22; }

//My Function
double discount_to_double(double discount)
{
    return discount * percentage_modifier();
}

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate
    return daily_billable_hours() * hourly_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    return before_discount * (1 - discount_to_double(discount)); //factorized
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.

    double with_discount = apply_discount(hourly_rate, discount);
    double daily = daily_rate(with_discount);
    
    return ceil(monthly_billable_days() * daily);
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double with_discount = apply_discount(hourly_rate, discount);
    double daily = daily_rate(with_discount);
    
    return floor(budget / daily);
}
