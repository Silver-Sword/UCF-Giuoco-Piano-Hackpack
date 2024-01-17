# UCF Giuoco Piano C++ Hackpack

- PDF: [kactl.pdf](https://github.com/ucf-programming-team/hackpack-cpp/releases/download/latest/kactl.pdf)
- Hackpack cloned from [UCF Hackpack](https://github.com/ucf-programming-team/hackpack-cpp) 

## Style
- use only the `#define`s and `typedef`s in the [template](https://github.com/ucf-programming-team/hackpack-cpp/blob/master/content/contest/template.cpp)
- run the formatter on any code you commit (`make format`)
    - you may need to [install `clang-format-15`](https://apt.llvm.org/).
    on Ubuntu, this can be done with
    ```bash
    wget -O - https://apt.llvm.org/llvm-snapshot.gpg.key|sudo apt-key add -
    source /etc/os-release
    sudo add-apt-repository "deb http://apt.llvm.org/$UBUNTU_CODENAME/ llvm-toolchain-$UBUNTU_CODENAME-15 main"
    sudo apt-get update
    sudo apt-get install clang-format-15
    ```
- name files in upper camel case

## Building PDF
The three dependencies for making the PDF are LaTeX, Python, and Make.
To build the hackpack PDF, go to the base directory and run `make kactl`.
