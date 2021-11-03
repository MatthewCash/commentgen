# commentgen

A program to generate the comment/header for my CS courses. Name and class are supplied at compile time, assignment and description are provided at runtime.

### Usage

```sh
# Install a C toolchain from your package manager
apt install build-essential
dnf install @development-tools
pacman -S base-devel

# Build, providing name and class
make name="My Name" class="Computer Science"

# Run, providing assignment and description in prompt
bin/commentgen > my_program.c
```
