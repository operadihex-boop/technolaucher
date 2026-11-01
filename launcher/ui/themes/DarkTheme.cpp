// SPDX-License-Identifier: GPL-3.0-only
/*
 *  Techno Launcher - Minecraft Launcher
 *  Copyright (C) 2024 Tayou <git@tayou.org>
 *  Copyright (C) 2024 TheKodeToad <TheKodeToad@proton.me>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * This file incorporates work covered by the following copyright and
 * permission notice:
 *
 *      Copyright 2013-2021 MultiMC Contributors
 *
 *      Licensed under the Apache License, Version 2.0 (the "License");
 *      you may not use this file except in compliance with the License.
 *      You may obtain a copy of the License at
 *
 *          http://www.apache.org/licenses/LICENSE-2.0
 *
 *      Unless required by applicable law or agreed to in writing, software
 *      distributed under the License is distributed on an "AS IS" BASIS,
 *      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *      See the License for the specific language governing permissions and
 *      limitations under the License.
 */
#include "DarkTheme.h"

#include <QObject>

QString DarkTheme::id()
{
    return "dark";
}

QString DarkTheme::name()
{
    return QObject::tr("Techno Dark");
}

QPalette DarkTheme::colorScheme()
{
    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(15, 12, 34));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(20, 16, 46));
    darkPalette.setColor(QPalette::AlternateBase, QColor(29, 23, 61));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(35, 28, 72));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(103, 216, 255));
    darkPalette.setColor(QPalette::Highlight, QColor(133, 101, 255));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);
    darkPalette.setColor(QPalette::PlaceholderText, Qt::darkGray);
    return fadeInactive(darkPalette, fadeAmount(), fadeColor());
}

double DarkTheme::fadeAmount()
{
    return 0.5;
}

QColor DarkTheme::fadeColor()
{
    return QColor(15, 12, 34);
}

bool DarkTheme::hasStyleSheet()
{
    return true;
}

QString DarkTheme::appStyleSheet()
{
    return R"(
        QWidget { color: #eeeaff; }
        QMainWindow, QDialog { background: #0f0c22; }
        QToolTip { color: #f7f4ff; background: #211a45; border: 1px solid #7760dc; padding: 7px 9px; border-radius: 7px; }
        QMenuBar, QMenu, QToolBar, QStatusBar { background: #15112e; border: 0; }
        QMenuBar::item { padding: 8px 12px; border-radius: 6px; }
        QMenuBar::item:selected, QMenu::item:selected { background: #332765; color: #ffffff; }
        QMenu { border: 1px solid #34285f; padding: 6px; }
        QMenu::item { padding: 7px 26px 7px 12px; border-radius: 5px; }
        QToolBar { spacing: 7px; padding: 8px; }
        QToolButton, QPushButton { background: #211a43; border: 1px solid #3b3068; border-radius: 8px; padding: 8px 13px; color: #eeeaff; }
        QToolButton:hover, QPushButton:hover { background: #30265e; border-color: #8068ee; }
        QToolButton:pressed, QPushButton:pressed { background: #49358d; }
        QPushButton:default { background: #7657ed; border: 1px solid #927cff; color: white; font-weight: 600; }
        QPushButton:default:hover { background: #896dff; }
        QPushButton:disabled, QToolButton:disabled { color: #817a9f; background: #19152f; border-color: #282147; }
        QLineEdit, QTextEdit, QPlainTextEdit, QComboBox, QSpinBox, QDoubleSpinBox, QDateEdit, QTimeEdit {
            background: #17132f; border: 1px solid #39305f; border-radius: 7px; padding: 7px 9px; selection-background-color: #7657ed;
        }
        QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus, QComboBox:focus, QSpinBox:focus { border: 1px solid #927cff; }
        QTabWidget::pane { border: 1px solid #302750; border-radius: 8px; top: -1px; background: #15112e; }
        QTabBar::tab { background: #19152f; color: #aaa3c7; padding: 9px 16px; margin-right: 4px; border-radius: 7px 7px 0 0; }
        QTabBar::tab:selected { background: #30265e; color: #ffffff; border-bottom: 2px solid #9a82ff; }
        QTabBar::tab:hover:!selected { background: #241d45; }
        QTreeView, QListView, QTableView, QTreeWidget, QListWidget, QTableWidget { background: #14102b; alternate-background-color: #191532; border: 1px solid #2b234d; border-radius: 8px; gridline-color: #292146; }
        QTreeView::item, QListView::item, QTableView::item { padding: 5px; }
        QTreeView::item:selected, QListView::item:selected, QTableView::item:selected { background: #3a2d70; color: white; }
        QHeaderView::section { background: #201a40; color: #c9c2e7; border: 0; border-bottom: 1px solid #39305f; padding: 8px; }
        QGroupBox { border: 1px solid #302750; border-radius: 9px; margin-top: 13px; padding: 12px 9px 9px; font-weight: 600; }
        QGroupBox::title { subcontrol-origin: margin; left: 12px; padding: 0 5px; color: #c8bcff; }
        QCheckBox, QRadioButton { spacing: 8px; }
        QProgressBar { background: #211a43; border: 0; border-radius: 5px; text-align: center; min-height: 9px; color: white; }
        QProgressBar::chunk { background: #8567ff; border-radius: 5px; }
        QScrollBar:vertical { background: transparent; width: 10px; margin: 3px; }
        QScrollBar::handle:vertical { background: #403568; border-radius: 5px; min-height: 28px; }
        QScrollBar::handle:vertical:hover { background: #7560bc; }
        QScrollBar:horizontal { background: transparent; height: 10px; margin: 3px; }
        QScrollBar::handle:horizontal { background: #403568; border-radius: 5px; min-width: 28px; }
        QScrollBar::add-line, QScrollBar::sub-line { width: 0; height: 0; }
        QSplitter::handle { background: #292147; }
        QFrame[frameShape="4"], QFrame[frameShape="5"] { color: #302750; }
    )";
}

QString DarkTheme::tooltip()
{
    return "";
}
