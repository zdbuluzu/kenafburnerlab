#include <string>
#include <vector>

void alternate_sum() {
    int acc = 0;
    for (int i = 1; i <= 12; ++i) {
        if (i % 2 == 0) acc += i; else acc -= i;
    }
    (void)acc;
}

void sum_squares() {
    int acc = 0;
    for (int i = -5; i <= 5; ++i) acc += i * i;
    (void)acc;
}

void power_of_two() {
    unsigned int n = 64u;
    bool is_power = (n != 0u) && ((n & (n - 1u)) == 0u);
    (void)is_power;
}

void sort_small() {
    int values[4] = {9, 3, 7, 1};
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (values[j] < values[i]) {
                int t = values[i];
                values[i] = values[j];
                values[j] = t;
            }
        }
    }
    (void)values[0];
}

extern "C" int still_compass();
extern "C" void brisk_ripple();
extern "C" void cobalt_boulder();
extern "C" void prime_signal();
extern "C" void misty_bridge();

int main() {
    alternate_sum();
    sum_squares();
    power_of_two();
    sort_small();
    brisk_ripple();
    cobalt_boulder();
    prime_signal();
    misty_bridge();
    return still_compass();
}
