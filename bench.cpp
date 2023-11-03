#include <iostream>
#include <random>

double bench_monte_carlo_pi_c(uint64_t n_sim_points) {
  uint64_t n_in = 0;
  auto gen = std::default_random_engine();
  auto distribution = std::uniform_real_distribution<double>(-0.5, 0.5);
  for (size_t i = 0; i < n_sim_points; i++) {
    double x = distribution(gen);
    double y = distribution(gen);
    if (sqrt(x * x + y * y) <= 0.5) {
      n_in++;
    }
  }
  return 4 * double(n_in) / n_sim_points;
}

int main() { std::cout << bench_monte_carlo_pi_c(1000000) << std::endl; }