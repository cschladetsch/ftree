#!/bin/sh

./b || exit

./a.out < test1
./a.out < test2
./a.out < test3
./a.out < test4

