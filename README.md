# Vector-Index-Rotation
Vector Indexrotation base on input

rotate the giving vecotr to right

if using "rotate" function, we should subtract the number of times the vector should be rotated

In order to make sure the index is always bigger than 0, we add the size of input vector to the index

noticing that the code needs to be optimized if the number of times the vector should be rotated is bigger than the size of the input vector

Run with
```
bazel run src/main:main
```

Test with
```
bazel test tests:tests
```
