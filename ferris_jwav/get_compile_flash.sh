#!/bin/sh
./fetch_json_from_downloads_folder.sh
./compile_from_json.sh && ./flash.sh

