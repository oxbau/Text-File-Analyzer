# Text File Analyzer in C

A simple command-line utility written in C that analyzes a given text file and reports statistics on the number of characters, words, and lines.

## Features

-   Counts total characters in the file.
-   Counts total words (sequences of non-whitespace characters).
-   Counts total lines.
-   Accepts the filename as a command-line argument.

## How to Compile and Run

1.  **Compile the code:**
    ```bash
    gcc analyzer.c -o analyzer
    ```

2.  **Run the executable with a file argument:**
    ```bash
    ./analyzer <your_file.txt>
    ```

## Usage Example

1.  First, create a sample text file named `sample.txt`:

    ```
    Hello world.
    This is a test file for the C program.
    Have a great day!
    ```

2.  Run the analyzer on this file:

    ```bash
    ./analyzer sample.txt
    ```

3.  The program will output the following statistics:

    ```
    --- File Statistics for: sample.txt ---
    Total Characters: 81
    Total Words: 16
    Total Lines: 3
    ```

## Contributing

Contributions are welcome. Please open an issue to discuss any changes or submit a pull request.
