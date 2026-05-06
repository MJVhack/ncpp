if [ "$(ls test)" != "" ]; then
  rm test
fi
g++ test.cpp Nint/Nint.cpp -o test
./test
