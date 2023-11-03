# Julia Script Demonstration

This repository simply hosts an demo for the Julia scripting languange

## Requirements
* Julia

## Setup
1. Clone repository from git and navigate into the repository
2. Enter the Julia REPL by typing
    ```bash
    julia
    ```
3. Inside th REPL, enter the package mode (usually `]` key). This should give you a prompt 
    ```bash
    julia> #press ']' key

    (@v1.9) pkg> activate .

    Activating project at `<your_path>/JuliaDemo`


    (@v1.x) pkg> instantiate
    ```
4. Exit the package mode with `Ctrl` + `c`
5. In the julia REPL again, type
    ```julia
    using IJulia
    jupyterlab(dir=pwd())
    ```

    this will ask you to install the required dependencies for the Jupyter Notebook

