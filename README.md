# Moonlight Application Build Guide To Integrate With TFS (TeraFlowSDN)

This repository includes a modified Moonlight Game Streaming application with the ETSI GS MEC015 Bandwidth Management API (focusing POST and PATCH methods). This will allow the Moonlight app to send bandwidth requests to [TeraFlowSDN Controller](https://tfs.etsi.org/) (TFS) for an improved gaming experience. The README provides a guide on integrating the Moonlight application with TerraFlowSDN.

The guide below outlines the process of building the Moonlight application code from source and integrating it with the TerraFlowSDN Controller. Make sure you have the required software and follow the steps for a successful build.

## Windows Build Requirements

1. **Qt Framework:**
   - Download the [Qt Framework](https://www.qt.io/download-qt-installer-oss).
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
   - Visual Studio will automatically detect the CMake file; please choose the file "**\xFlow-moonlight-qt\moonlight-common-c\moonlight-common-c\CMakeLists.txt**" as the designated CMake file.

6. **Build Moonlight Code:**
   - Use the following command to build the code.

     ```bash
     .\scripts\build-arch.bat release
     ```

## API Configuration

Before using the Moonlight Game Streaming application, follow the steps below to customize the API configuration with your TFS server details:

1. Open the source code file CustomNetworkManager.cpp. The location of this file is **\xFlow-moonlight-qt\app\streaming\CustomNetworkManager.cpp**.

2. Locate the line `const char* hostname = "127.0.0.1:3001";` in each of the functions (`sendPostRequest720p`, `sendPostRequest1080p`, `sendPostRequest1440p`, `sendPatchRequest`).

3. Replace the IP and port with your TFS server details.

    Example:
    ```cpp
    // Set the hostname for your TFS server
    const char* hostname = "your_tfs_server_ip:your_tfs_server_port";

4. Save the changes to `CustomNetworkManager.cpp`.

5. Rebuild the application.
   - Use the following command to build the code.

     ```bash
     .\scripts\build-arch.bat release
     ```
