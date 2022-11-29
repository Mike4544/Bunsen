# Bunsen
Periodic Bunsen is a free & open-source CLI tool used to work with chemistry and its different fields. It is designed to be very simple, user-friendly, and readily-available for all developers. It is written in C and is currently only available for Windows.

## Usage
Periodic Bunsen is a CLI tool, and is designed to be used in the terminal.
There are different commands, some commands require arguments, and some don't. To get a list of commands, use the ```help``` command. To get help on a specific command, use the ```helps <command>``` command.

The build command is ```gcc main.c cli.c periodic.c help.c -o bunsen```. The executable is called ```bunsen```.

## Features
A CLI tool, with commands for:

- Grabbing the name of a element from its initials
- Grabbing the initials of an element from its name
- Periodic table
- and more!

### Planned features
Periodic Bunsen is still in development, and is not yet complete. Planned features include:

- Grabbing the atomic number of an element from its name or initials
- Calculating the molar mass of a element
- Giving the electron configuration of an element
- Calculating the weight of an isotope

## Installation

### Releases

#### Windows
Download the latest release from the [releases page](https://github.com/Colack/Bunsen/releases). Extract the zip file, and run the executable.

#### Linux
As of now, there are no releases for Linux. However, you can build the source code yourself.

#### macOS
As of now, there are no releases for macOS. However, you can build the source code yourself.

### Building from source
Periodic Bunsen is written in C, and is compiled using GCC. If you want to test other compilers, you can do so, but it is not guaranteed to work. If you find an error, and it is caused by a compiler, please report it. You can install GCC from [here](https://gcc.gnu.org/).

## Screenshots
<p align="center">
    <img src="https://github.com/Colack/Bunsen/assets/screen1.png" alt="Screenshot 1"/>
</p>
  
## Contributing
Periodic Bunsen is open-source, and is available here on GitHub. If you want to contribute, you can do so by forking the repository, making your changes, and then making a pull request. If you find any bugs, please report them by making an issue.