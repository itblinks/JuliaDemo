import random, math
def bench_monte_carlo_py(n_sim_points):
    n_in = 0
    for i in range(0,n_sim_points):
        x = random.uniform(-0.5, 0.5)
        y = random.uniform(-0.5, 0.5)
        if math.sqrt(x**2 + y**2) <= 0.5:
            n_in +=1
    
    return 4*n_in/n_sim_points

if __name__ == "__main__":
    print(f"pi is approx {bench_monte_carlo_py(1_000_000)}")
