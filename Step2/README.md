# Step 2: Adding a Library

## Exercise 1 - Creating a Library

### Build and Run / Exercise 1

- Prepare

    ```sh
    mkdir -p Step2_build
    cd Step2_build
    ```

- Configure

    ```sh
    cmake ../Step2
    ```

- Build

    ```sh
    cmake --build .
    ```

- Run

    ```sh
    ./Tutorial 9
    ```

    > Expected output:
    >
    >   ```plaintext
    >   Computing sqrt of 9 to be 5
    >   Computing sqrt of 9 to be 3.4
    >   Computing sqrt of 9 to be 3.02353
    >   Computing sqrt of 9 to be 3.00009
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   The square root of 9 is 3
    >   ```

- Disorganize

    ```sh
    cd ../
    ```

## Exercise 2 - Adding an Option

### Build and Run / Exercise 2

- Prepare

    ```sh
    cd Step2_build
    ```

- Configure / `USE_MYMATH` ON

    ```sh
    cmake ../Step2
    ```

    > Before configuring, one may need to `rm CMakeCache.txt` so that `USE_MYMATH` retrieve `ON` as the default value.

- Build / `USE_MYMATH` ON

    ```sh
    cmake --build .
    ```

- Run / `USE_MYMATH` ON

    ```sh
    ./Tutorial 9
    ```

    > Expected output:
    >
    >   ```plaintext
    >   Computing sqrt of 9 to be 5
    >   Computing sqrt of 9 to be 3.4
    >   Computing sqrt of 9 to be 3.02353
    >   Computing sqrt of 9 to be 3.00009
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   The square root of 9 is 3
    >   ```

- Configure / `USE_MYMATH` OFF

    ```sh
    cmake ../Step2 -DUSE_MYMATH=OFF
    ```

- Build / `USE_MYMATH` OFF

    ```sh
    cmake --build .
    ```

- Run / `USE_MYMATH` OFF

    ```sh
    ./Tutorial 9
    ```

    > Expected output:
    >
    >   ```plaintext
    >   Computing sqrt of 9 to be 5
    >   Computing sqrt of 9 to be 3.4
    >   Computing sqrt of 9 to be 3.02353
    >   Computing sqrt of 9 to be 3.00009
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   Computing sqrt of 9 to be 3
    >   The square root of 9 is 3
    >

- Disorganize

    ```sh
    cd ../
    ```
