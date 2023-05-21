qmake 命令

```bash
qmake -project
qmake -o Makefile [name].pro
vim [name].pro
make
```



**Note** 默认情况下用不了 qmake，它在qt安装目录里：`ln -s /home/.../bin/qmake /usr/bin/qmake` 