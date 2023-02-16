# CMDPaint

## Overview
CMDPaint is a simple paint application that runs in Windows CMD.

![](https://github.com/MatheAndrei/CMDPaint/blob/main/preview/CMDPaint-screenshot.png)

## Requirements
- Windows 7 or later
- Microsoft Visual C++ Redistributable installed ([vc_redist](https://learn.microsoft.com/en-US/cpp/windows/latest-supported-vc-redist?view=msvc-170))

## How to use
In order to successfully run the application the executable, resources and images folder must be put in the same directory.
If Windows 10 or 11 is used, change the default terminal to Windows Console Host ([tutorial](https://windowsreport.com/windows-11-change-default-terminal/)) or change the compatibility mode of the executable to Windows XP (Service Pack 3).

## Features
- Tools:
  - Pencil
  - Eraser
  - Line
  - Rectangle
  - Ellipse
  - Bucket
  - Copy/Paste
  - Clear
- 2 pages of glyphs
- Foreground/Background colors
- Undo/Redo (max. 20 timestamps)
- Save/Load image (.uimg custom format)
- Keyboard shortcuts
- Scaling the window

## Preview
![](https://github.com/MatheAndrei/CMDPaint/blob/main/preview/CMDPaint-preview.gif)

## Important notes
- the app must be run in Windows Console Host

## Known issues
- it does not work with the new [Windows Terminal](https://en.wikipedia.org/wiki/Windows_Terminal); only with [Windows Console Host](https://en.wikipedia.org/wiki/Windows_Console)
