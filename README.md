# tank-drive
A test tank drive codebase.

## Installing
Install the PROS extension.

### Linux notes
If you're getting build errors that look like the following:
```bash
/bin/sh: symbol lookup error: /bin/sh: undefined symbol: rl_trim_arg_from_keyseq
```

You can point the PROS `readline.so.8` to your local one instead:
```bash
cd ~/.config/<vscode path>/User/globalStorage/sigbots.pros/install/pros-cli-linux
rm _internal/libreadline.so.8
ln -s /usr/lib/libreadline.so.8 _internal/libreadline.so.8
```

If `libreadline.so.8` does not exist at `/usr/lib/libreadline.so.8`, you can find it using:
```bash
ldconfig -p | grep readline
    libreadline.so.8 (libc6,x86-64) => /usr/lib/libreadline.so.8
    libreadline.so (libc6,x86-64) => /usr/lib/libreadline.so
```