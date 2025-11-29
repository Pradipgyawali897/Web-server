This is a simple web server project implemented in C++. It includes modules for handling HTTP requests, rendering HTML templates, and managing file operations. The project is structured into various namespaces and classes to ensure modularity and maintainability. Key features include support for different HTTP methods, status codes, and dynamic content rendering.

To get started, clone the repository and follow the build instructions provided in the documentation. Contributions and feedback are welcome!

use the following command to clone the repository:

```git clone https://github.com/Pradipgyawali897/Web-server.git```

Then navigate to the project directory and follow the build instructions .
# Web Server Project

Run this command to build the project:

```mkdir build
    cd build
    cmake ..
    make
    ```
## Now navigate to the build directory and run the server:

```cd build
    ./WebServer```

The server will start running on the specified port (default is 8080). You can access it via your web browser or any HTTP client.
# Features
- Handles HTTP requests and responses
- Supports various HTTP methods (GET, POST, etc.)
- Renders HTML templates dynamically        
- Manages file operations efficiently
- Implements standard HTTP status codes
- Modular and maintainable code structure
- Easy to extend and customize
# Requirements
- C++11 or higher
- CMake for building the project
# License
This project is licensed under the MIT License. See the LICENSE file for details.

