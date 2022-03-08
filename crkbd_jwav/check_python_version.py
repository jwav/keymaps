#!/usr/bin/python3

from sys import version_info, exit

verbose = True
version_str = ".".join([str(x) for x in version_info][:3])
min_version_str = "3.7.0"
min_version_info = [int(x) for x in min_version_str.split(".")]
if verbose:
    print("current version:", version_str)
    print("min version:", min_version_str)
    # print(min_version_info)

for x,y in zip(version_info, min_version_info):
    if x < y:
        if verbose:
            print(f"The current version ({version_str}) is older than {min_version_str}")
        exit(1)
else:
    if verbose:
        print(f"The current version ({version_str}) is newer than {min_version_str}")
    exit(0)
