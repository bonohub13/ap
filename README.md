# ap (Apply patch)

## ::::: Installation :::::
### Prerequisites
- Dependencies:
    - git
    - make
    - cmake
    - g++ (compiler for c++)

1. Clone this git repository.
```
git clone https://github.com/bonohub13/apply_patch
```
2. Create `build` directory under `apply_patch`.
```
cd apply_patch && mkdir build
```
3. Build under `build` directory.
```
cd build && cmake .. && make
```

## ::::: TODO :::::
1. Inform the user the status of the file that is being patched.
2. Maybe a little more error codes and messages??? (dunno)

## ::::: Follow Up :::::
This is being developed under Arch linux. So there might be issues relating to
new implementations of C++ that is not yet being implemented to other distros.
(Such as Debian and its forks)
