# Step 1: A Basic Starting Point

## Exercise 1 - Building a Basic Project¶

### Build and Run / Exercise 1

- Prepare

    ```sh
    mkdir -p Step1_build
    cd Step1_build
    ```

- Configure

    ```sh
    cmake ../Step1
    ```

- Build

    ```sh
    cmake --build .
    ```

- Run

    ```sh
    ./Tutorial 4294967296
    # => The square root of 4.29497e+09 is 65536
    ./Tutorial 10
    # => The square root of 10 is 3.16228
    ./Tutorial
    # => Usage: ./Tutorial number
    ```

    > `setopt interactivecomments` may be required for running the above script on zsh.

- Disorganize

    ```sh
    cd ../
    ```
