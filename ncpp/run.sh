if [ "$(ls test)" != "" ]; then
  rm test
fi
g++ test.cpp Nint/Nint.cpp Nstr/Nstr.cpp -o test
./test