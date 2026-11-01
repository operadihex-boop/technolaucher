# Techno Launcher

Techno Launcher is a downstream, Windows-friendly rebrand of Prism Launcher. It keeps the upstream instance, mod, version, Java and pack-management code while applying a custom dark-violet interface and Techno branding.

## Build on Windows

Use the upstream Prism Launcher Windows build prerequisites (Visual Studio 2022 C++ workload, CMake, Ninja, vcpkg dependencies and Qt 6). Configure with `-DLauncher_APP_BINARY_NAME=TechnoLauncher`, then build the `Launcher` target. The generated executable is `TechnoLauncher.exe`.

The default first-run appearance is the Techno Dark theme. Users can still select another theme in settings.

## Important notes

- Existing account and offline-profile code has been left unchanged by this rebrand.
- The upstream Prism Launcher CurseForge API key is not included; provide your own key if you are authorized to use CurseForge integration.
- Automatic upstream updates and Prism-specific news/help links are disabled so this fork does not overwrite itself or present upstream branding as its own.
- This project remains subject to the upstream GPL-3.0 license. Preserve `LICENSE`, `COPYING.md`, source notices and third-party licenses.
- Techno Launcher is an independent community fork and is not affiliated with Mojang, Microsoft or the Prism Launcher project.
