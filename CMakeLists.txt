cmake_minimum_required(VERSION 3.5)

project(PortfolioManager LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.


find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(PortfolioManager
    main.cpp
    portfolio_manager.cpp
    portfolio_manager.h
    portfolio_manager.ui
    profile_wdg.ui
    profile_wdg.h
    profile_wdg.cpp
    resources.qrc
  )

target_link_libraries(PortfolioManager PRIVATE Qt5::Widgets)
