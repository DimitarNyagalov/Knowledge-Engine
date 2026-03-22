<h1 align = "center"> Knowedge Engine</h1>
 
<p align="center">
<img width="600" height="6000" alt="Knowledge_Engine_mat-removebg-preview" src="https://github.com/user-attachments/assets/4c49767a-11e4-48b3-877f-f956000ac65f" />
</p>
 
<h2 align="center">📑 Table of Contents</h2>
 
<p align="center"><a href="#about-the-project"><img src="https://img.shields.io/badge/About%20The%20Project-181818?style=for-the-badge&color=blue" /></a><a href="#build"><img src="https://img.shields.io/badge/Build%20%26%20Run-181818?style=for-the-badge&color=green" /></a><a href="#tech"><img src="https://img.shields.io/badge/Technologies-181818?style=for-the-badge&color=purple" /></a></p>
<hr>
<h2 align="center" id="about-the-project">🧠 About The Project</h2>
Knowledge Engine is a C++ console application for learning and testing math skills.

It includes a study section, a randomized test generator and weighted scoring.

What It Does
- Shows 5 learning units: Addition, Subtraction, Multiplication and Division.
- Generates a balanced 20‑question test.
- Calculates score, grade, and category performance.
- Uses a clean, modular C++ architecture.
<hr>
<h2 align="center" id="build">🛠️ Build & Run</h2>

Linux / macOS:

```g++ -std=c++17 src/main.cpp -I src \
src/ui/contents.cpp src/ui/test.cpp \
src/io/question_loader.cpp src/io/results_manager.cpp \
src/test/generator.cpp src/test/scoring.cpp \
src/stats/statistics.cpp -o knowledge
./knowledge
```


Windows (MinGW)

```g++ -std=c++17 src/main.cpp src/ui/contents.cpp src/ui/test.cpp ^
src/io/question_loader.cpp src/io/results_manager.cpp ^
src/test/generator.cpp src/test/scoring.cpp ^
src/stats/statistics.cpp -I src -o knowledge.exe
knowledge.exe
```

If g++ is missing:
- Ubuntu/Debian: sudo apt install build-essential
- Windows: Install MinGW‑w64
<hr>
 
<h2 align="center" id="technologies">🛠️ Technologies</h2>
<h3 align="center">These are the tools we used:</h3>
 
<p align="center">
    <a href="https://git-scm.com/"><img src="https://git-scm.com/images/logos/downloads/Git-Icon-Black.png" alt="Git logo" width="70"/></a>
    <a href="https://github.com/"><img src="https://cdn-icons-png.flaticon.com/512/2111/2111612.png" alt="GitHub logo" width="70"/></a>
    <a href="https://www.cplusplus.com/"><img src="https://brandslogos.com/wp-content/uploads/thumbs/c-logo-vector.svg" alt="C++ logo" width="70"/></a>
    <a href="https://visualstudio.microsoft.com/vs/"><img src="https://visualstudio.microsoft.com/wp-content/uploads/2021/10/Product-Icon.svg" alt="Visual Studio logo" width="70"/></a>
    <a href="https://visualstudio.microsoft.com/vs/"><img src="https://upload.wikimedia.org/wikipedia/commons/9/9a/Visual_Studio_Code_1.35_icon.svg" alt="Visual Studio logo" width="70"/></a>
    <a href="https://www.microsoft.com/en/microsoft-teams/group-chat-software"><img src="https://img.icons8.com/color/344/microsoft-teams.png" alt="MS Teams logo" width="70" /></a>
    <a href="https://www.microsoft.com/en-ww/microsoft-365/word"><img src="https://img.icons8.com/color/344/ms-word.png" alt="MS Word logo" width="70" /></a>
    <a href="https://www.microsoft.com/en-ww/microsoft-365/powerpoint"><img src="https://img.icons8.com/color/344/ms-powerpoint.png" alt="MS PowerPoint logo" width="70" /></a>
</p>
<hr>
 
<h2 align="center" id="our-team">👥 Our Team</h2>
 
<p align="center">
 <a href="https://github.com/Martin-Zhelev"> Мартин Атанасов Желев </a> — 🧭 Scrum Trainer<br>
 <a href="https://github.com/Ivantr77"> Иван Иванов Трифонов </a> — ⚙️ Back-End Developer<br>
 <a href="https://github.com/Georgi-Ivaylov-Nikolov"> Георги Ивайлов Николов </a> — ⚙️ Back-End Developer<br>
 <a href="https://github.com/DimitarNyagalov"> Димитър Пламенов Нягалов </a> — 🖌️ Designer<br>
</p>
<hr>
 
 
 
