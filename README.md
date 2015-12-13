# clionDebugTest

- - - -
####Repro:####

1. clone project
2. open project in CLion
3. set breakepoint on line 5  ```buf.resize(4000000, 1); ```
4. run debug
5. when debug stops on the breakepoint, press 'Step Over(F8)'
6. make some tea or cofee while GDB window shows "Connected" and GDB process eats up to 100% CPU
7. after some time(~1 minute) GDB window changes text to "Collecting data..."
8. after another minute GDB process dies and debug is done. 
