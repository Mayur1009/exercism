// interest_rate returns the interest rate for the provided balance.
#include <iostream>
double interest_rate(double balance) {
    // TODO: Implement the interest_rate function
    // - 3.213% for a balance less than `0` dollars (balance gets more negative).
    // - 0.5% for a balance greater than or equal to `0` dollars, and less than `1000` dollars.
    // - 1.621% for a balance greater than or equal to `1000` dollars, and less than `5000` dollars.
    // - 2.475% for a balance greater than or equal to `5000` dollars.
    if (balance < 0) {
        return 3.213;
    } else if (balance < 1000) {
        return 0.5;
    } else if (balance < 5000) {
        return 1.621;
    } else {
        return 2.475;
    }
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // TODO: Implement the yearly_interest function
    return balance * interest_rate(balance) / 100;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    // TODO: Implement the annual_balance_update function
    return balance + yearly_interest(balance);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // TODO: Implement the years_until_desired_balance function
    int cnt = 0;
    double new_bal = balance;
    while(new_bal < target_balance) {
        new_bal = annual_balance_update(new_bal);
        cnt++;
    }
    return cnt;
}
