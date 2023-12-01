# Moonlight Application Build Guide To Integrate With TFS(TerraFlowSDN)

This guide outlines the steps to build the Moonlight application code from source. Ensure you have the necessary software and follow the steps below for a successful build.

## Windows Build Requirements

1. **Qt Framework:**
   - Download the [Qt Framework](https://www.qt.io/download-qt-installer-oss ).
   - During installation, make sure to select the Qt version 5.15 SDK.
   - Select MSVC option during Qt installation. MinGW is not supported.
   - Follow the installation instructions.

2. **System Requirements:**
   - Ensure you are using Windows 7 or later.

3. **Visual Studio (Community Edition):**
   - Download the [Community Edition of Visual Studio](https://visualstudio.microsoft.com/downloads/).
   - Install Visual Studio with the necessary components for C++ development.
   - During installation, make sure to select "Desktop development with C++" from the available workloads.

This workload includes the tools and libraries required for C++ development, ensuring you have the necessary components for building the Moonlight application code.

## Building Moonlight Code

Follow these steps to build the Moonlight application code:

1. **Clone the Repository:**
   - Clone the repository to your local machine.

     ```bash
     git clone https://github.com/M-Hamza007/xFlow-moonlight-qt.git
     ```

2. **Navigate to the Cloned Folder:**
   - Open a terminal or command prompt and navigate to the cloned repository.

     ```bash
     cd xFlow-moonlight-qt
     ```

3. **Update Submodules:**
   - Initialize and update submodules recursively.

     ```bash
     git submodule update --init --recursive
     ```

4. **Open in Visual Studio:**
   - Open the cloned folder in Visual Studio.

5. **Select CMake File:**
   - Visual Studio will automatically detect the CMake file; please choose the file "\xFlow-moonlight-qt\moonlight-common-c\moonlight-common-c\CMakeLists.txt" as the designated CMake file.

6. **Build Moonlight Code:**
   - Use the following command to build the code.

     ```bash
     .\scripts\build-arch.bat release
     ```